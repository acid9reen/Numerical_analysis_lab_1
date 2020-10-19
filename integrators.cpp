#include "integrators.h"

Integrator::Integrator(ddd_function func_, 
					   double step_, double eps_, double max_iters_)
{
	step = step_;
	func = func_;
	eps = eps_;
	max_error = 0;
	mul_count = 0;
	div_count = 0;
	max_step = step;
	max_step_x = 0;
	min_step = step;
	min_step_x = 0;
	first_point_flag = true;
	max_iters = max_iters_;
}

double Integrator::_runge_kutta_4(double x, double v, double step)
{
	double k1 = func(x, v);
	double k2 = func(x + step / 2.0, v + 0.5 * step * k1);
	double k3 = func(x + step / 2.0, v + 0.5 * step * k2);
	double k4 = func(x + step, v + step * k3);

	return v + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}

Integrator::Point_info Integrator::next_point(double x, double v)
{	
	if (first_point_flag)
	{
		first_point_flag = false;

		Point_info point_info(x, v);

		return point_info;
	}

	double x_next = x + step;
	double v_next = _runge_kutta_4(x, v, step);

	Point_info point_info(x_next, v_next, 0., step);

	return point_info;
}

Integrator::Point_info Integrator::next_point_with_step_control(double x, double v)
{
	if (first_point_flag)
	{
		first_point_flag = false;
		return Point_info(x, v);
	}

	double iter_counter{ 0 };
	double delta{ 0 };
	double error{ 0 };

	double x_next { 0 };
	double v_next { 0 };
	double v2_next{ 0 };

	while (true)
	{
		iter_counter += 1;
		double old_step = step;

		double whole_step = _runge_kutta_4(x, v, step);
		double half_step_1 = _runge_kutta_4(x, v, step / 2.);
		double half_step_2 = _runge_kutta_4(x + step / 2., half_step_1, step / 2.);

		delta = whole_step - half_step_2;
		error = abs((delta) / (pow(2, 4) - 1));

		if (error > eps && iter_counter <= max_iters)
		{
			step /= 2.;
			div_count++;
		}
		else
		{
			x_next = x + step;
			v_next = whole_step;
			v2_next = half_step_2;

			if (error < eps / pow(2, 4 + 1))
			{
				step *= 2.;
				mul_count++;
			}

			if (error > max_error)
			{
				max_error = error;
			}

			if (step > max_step)
			{
				max_step = step;
				max_step_x = x_next;
			}

			if (step < min_step)
			{
				min_step = step;
				min_step_x = x_next;
			}

			break;
		}

		Point_info point_info(x_next, v_next, v2_next,
							  old_step, error, mul_count, div_count);

		return point_info;
	}
}

Integrator::Max_min_step Integrator::get_max_min_step()
{
	return Max_min_step(max_step, max_step_x, min_step, min_step_x);
}
