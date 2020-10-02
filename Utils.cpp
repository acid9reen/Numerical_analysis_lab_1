#include "Utils.h"

//
// User defined functions
//

int utils::signum(double a)
{
	if (a > 0)
		return 1;
	if (a < 0)
		return -1;
	if (a == 0)
		return 0;
}

double utils::function_1(double x, double y /* =0 */)
{
	return exp(2 * x);
}

double utils::calc_func_1(double y1, double y2 /* =0 */)
{
	return y2;
}

double utils::calc_func_2(double y1, double y2 /* =0 */)
{
	//параметры пока что просто по единице, потом можно их передавать 
	//вместе с иксами и игреками; a = 1; b = 1; c = 1;
	return ((-1)*y2*y2*signum(y2) - y2 - y1);
}

//double utils::function_1_derivative(double x, double y /* =0 */)
//{
//	return 2 * y;
//}


//
// Numerical methods
//

std::vector<double> utils::runge_kutta_4(std::function<double(double, double)> func,
	std::function<double(double, double)> calc_func_1,
	std::function<double(double, double)> calc_func_2,
	double step, double x, double y1, double y2)
{
	double k1_1 = calc_func_1(x, y1);
	double k2_1 = calc_func_1(x + step / 2.0, y1 + 0.5 * step * k1_1);
	double k3_1 = calc_func_1(x + step / 2.0, y1 + 0.5 * step * k2_1);
	double k4_1 = calc_func_1(x + step, y1 + step * k3_1);

	double k1_2 = calc_func_2(x, y2);
	double k2_2 = calc_func_2(x + step / 2.0, y2 + 0.5 * step * k1_2);
	double k3_2 = calc_func_2(x + step / 2.0, y2 + 0.5 * step * k2_2);
	double k4_2 = calc_func_2(x + step, y2 + step * k3_2);

	double y1_next = y1 + (step / 6.0) * (k1_1 + 2.0 * k2_1 + 2.0 * k3_1 + k4_1);
	double y2_next = y2 + (step / 6.0) * (k1_2 + 2.0 * k2_2 + 2.0 * k3_2 + k4_2);

	std::vector<double> y_next = { y1_next, y2_next };
	return y_next;
}
