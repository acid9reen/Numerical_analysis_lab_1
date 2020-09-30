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
	return 2 * exp(2 * x);
}

//
// Numerical methods
//

double utils::runge_kutta_4(std::function<double(double, double)> func,
	std::function<double(double, double)> func_der,
	double step, double x, double y)
{
	double k1 = func(x, 0.0);
	double k2 = func(x + step / 2.0, 0.0);
	double k3 = func(x + step / 2.0, 0.0);
	double k4 = func_der(x + step, 0.0);

	return y + (step / 6.0) * (k1 + 2.0 * k2 + 2.0 * k3 + k4);
}
