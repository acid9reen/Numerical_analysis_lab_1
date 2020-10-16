#pragma once

#include <functional>

class integrator
{
	typedef std::function<double(double, double)> ddd_function;

private:
	struct Point_info
	{
		double curr_x;
		double curr_v;
		double curr_v_2;
		double curr_step;
		double error;
	};

	Point_info point_info;
	ddd_function func;
	double mul_count;
	double div_count;
	double eps;

public:
	integrator(ddd_function func_, double x, double v, double step, double eps_);
	double runge_kutta_4();
	Point_info next_point();
	Point_info next_point_with_step_control();
};
