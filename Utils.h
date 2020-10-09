#pragma once

#include <functional>
#include <vector>
#include <cmath>

namespace utils
{
	//
	// Type aliases
	//

	typedef std::function<double(double, double)> ddd_function;
	typedef std::function<double(ddd_function, double, double, double)> num_method;

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

	
	std::vector<double> next_point(num_method method, ddd_function func,
								   double x, double y, double step, double eps);	
	std::vector<double> next_point_with_step_conrol(num_method method, ddd_function func,
													double x, double y, double step, double eps);
}
