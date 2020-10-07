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
 
