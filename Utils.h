#pragma once

#include <functional>
#include <cmath>

namespace utils
{
	//
	// User defined functions
	//

	double function_1(double x, double y = 0.0);
	double function_1_derivative(double x, double y = 0.0);

	//
	// Numerical methods
	//

	double runge_kutta_4(std::function<double(double, double)> func,
		std::function<double(double, double)> func_der,
		double step, double x, double y);
}
