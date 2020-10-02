#pragma once

#include <functional>
#include <cmath>
#include <vector>

namespace utils
{
	//
	// User defined functions
	//
	int signum(double a);
	double function_1(double x, double y = 0.0);
	/*double function_1_derivative(double x, double y = 0.0);*/
	double calc_func_1(double y1, double y2 /* =0 */);
	double calc_func_2(double y1, double y2 /* =0 */);

	//
	// Numerical methods
	//

	std::vector<double> runge_kutta_4(std::function<double(double, double)> func,
		std::function<double(double, double)> calc_func_1,
		std::function<double(double, double)> calc_func_2,
		double step, double x, double y1, double y2);
}
