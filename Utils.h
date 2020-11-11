#pragma once

#include <functional>
#include <cmath>
#include <vector>

struct parameter
{
	double a, b, c;
};

namespace utils
{
	//
	// Type aliases
	//

	typedef std::function<double(double, double, double, parameter)> dddp_function;
	typedef std::function<std::vector<double>(dddp_function, dddp_function, double, double, double, double, parameter)> num_method;

	//
	// User defined functions
	//
	double calc_func_1(double x, double y1, double y2, parameter param /* =0 */);
	double calc_func_2(double x, double y1, double y2, parameter param /* =0 */);

	//
	// Numerical methods
	//

	std::vector<double> runge_kutta_4_system(
		dddp_function calc_func_1,
		dddp_function calc_func_2,
		double step, double x, double y1, double y2, parameter param);

	std::vector<double> next_point(num_method method, dddp_function func1, dddp_function func2,
		double x, double y1, double y2, double step, parameter param);
	std::vector<double> next_point_with_step_control(num_method method, dddp_function func1, dddp_function func2,
		double x, double y1, double y2, double step, double eps, parameter param, double max_Iter);
}