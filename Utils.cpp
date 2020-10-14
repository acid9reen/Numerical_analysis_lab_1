#include "Utils.h"

//
// User defined functions
//

double utils::function_1(double x, double u0 /* =0 */)
{
	return u0*exp(2 * x);
}

double utils::function_1_derivative(double x, double u /* =0 */)
{
	return 2 * u;
}

//
// Numerical methods
//

double utils::runge_kutta_4(utils::ddd_function func_der,
							double step, double x, double v)
{
	double k1 = func_der(x, v);
	double k2 = func_der(x + step / 2.0, v + 0.5 * step * k1);
	double k3 = func_der(x + step / 2.0, v + 0.5 * step * k2);
	double k4 = func_der(x + step, v + step * k3);

	return v + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}

//
// Usefull functions
//

std::vector<double> utils::next_point(num_method method, ddd_function func, double x, double v, double step, double eps)
{
	double v_next = method(func, step, x, v);
	double x_next = x + step;
	
	std::vector<double> point = { x_next, v_next, step };

	return point;
}

std::vector<double> utils::next_point_with_step_conrol(num_method method, ddd_function func,
													   double x, double v, double step, double eps)
{
	double whole_step;
	double half_step_1;
	double half_step_2;
	double error;
	double x_next;
	double v_next = 0;
	double double_step;
	

	while (true)
	{
		whole_step  = method(func, step, x, v); // получаем v_{n+1} из точки (x_{n}, v_{n}) с шагом h
		half_step_1 = method(func, step / 2., x, v); // получаем v_{n+1/2} из точки (x_{n}, v_{n}) с шагом h/2
		half_step_2 = method(func, step / 2., x + step /2., half_step_1); // получаем v_{n+1} с двумя крышками из точки (x_{n+1/2}, v_{n+1/2}) с шагом h/2

		error = abs((half_step_2 - whole_step) / (pow(2, 4) - 1)); // 4 because we use 4th order method

		if (error > eps)
			step /= 2.;
		else if (error < eps / pow(2, 4 + 1))
		{
			x_next = x + step;
			v_next = whole_step;
			step *= 2.;
			break;
		}
		else
		{
			x_next = x + step;
			v_next = whole_step;
			break;
		}
	}

	//y = whole_step;

	std::vector<double> point = { x_next, v_next, step };

	return point;
	
}
