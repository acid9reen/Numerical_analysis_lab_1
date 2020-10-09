#include "Utils.h"

//
// User defined functions
//

double utils::function_1(double x, double y /* =0 */)
{
	return exp(2 * x);
}

double utils::function_1_derivative(double x, double y /* =0 */)
{
	return 2 * y;
}

//
// Numerical methods
//

double utils::runge_kutta_4(utils::ddd_function func_der,
							double step, double x, double y)
{
	double k1 = func_der(x, y);
	double k2 = func_der(x + step / 2.0, y + 0.5 * step * k1);
	double k3 = func_der(x + step / 2.0, y + 0.5 * step * k2);
	double k4 = func_der(x + step, y + step * k3);

	return y + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}

//
// Usefull functions
//

std::vector<double> utils::next_point(num_method method, ddd_function func, double x, double y, double step, double eps)
{
	y = method(func, step, x, y);
	x += step;
	
	std::vector<double> point = { x, y, step };

	return point;
}

std::vector<double> utils::next_point_with_step_conrol(num_method method, ddd_function func,
													   double x, double y, double step, double eps)
{
	double whole_step;
	double half_step_1;
	double half_step_2;
	double error;

	while (true)
	{
		whole_step  = method(func, step, x, y);
		half_step_1 = method(func, step / 2., x, y);
		half_step_2 = method(func, step / 2., x + step /2., half_step_1);

		error = abs((half_step_2 - whole_step) / (pow(2, 4) - 1)); // 4 because we use 4th order method

		if (error > eps)
			step /= 2.;
		else if (error < eps / pow(2, 4 + 1))
		{
			x += step;
			step *= 2.;
			break;
		}
		else
		{
			x += step;
			break;
		}
	}

	y = whole_step;

	std::vector<double> point = { x, y, step };

	return point;
	
}
