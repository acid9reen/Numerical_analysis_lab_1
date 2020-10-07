#pragma once

#include <functional>
#include <cmath>

namespace utils
{
	//
	// Type aliases
	//

	typedef std::function<double(double, double)> ddd_function;
	typedef std::function<double(ddd_function, double, double, double)> method;

	//
	// User defined functions
	//

	double function_1(double x, double y = 0.0);
	double function_1_derivative(double x, double y = 0.0);

	//
	// Numerical methods
	//

	double runge_kutta_4(ddd_function func_der, double step, double x, double y);

	//
	// Usefull functions
	//

	double* method_wrapper(method);
}
