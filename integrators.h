#pragma once

#include <functional>

class integrator
{
	typedef std::function<double(double, double)> ddd_function;

private:
	struct Point_info
	{
		double x;
		double v;
		double v2;
		double step;
		double error;
		double div_count;
		double mul_count;


		Point_info(double x_, double v_, double v2_=0, double step_=0, 
				   double error_=0, double mul_count_=0, double div_count_=0) :

			x(x), v(v_), v2(v2_), step(step_), error(error_),
			mul_count(mul_count_), div_count(div_count_) {};
	};

	struct Max_min_step
	{
		double max_step;
		double max_step_x;
		double min_step;
		double min_step_x;

		Max_min_step(double max_step_, double max_step_x_, 
					 double min_step_, double min_step_x_) :

			max_step(max_step_), max_step_x(max_step_x_),
			min_step(min_step_), min_step_x(min_step_x_) {};
	};

	ddd_function func;
	double step;
	double eps;
	int max_iters;
	bool first_point_flag;

	// For max error feature
	double max_error;

	// For mul/div count feature
	double mul_count;
	double div_count;

	// For max/min step feature
	double max_step;
	double max_step_x;
	double min_step;
	double min_step_x;

	double _runge_kutta_4(double x, double v, double step);

public:
	integrator(ddd_function func_, double step,
			   double eps_, double max_iters_);
	integrator::Point_info next_point(double x, double v);
	integrator::Point_info next_point_with_step_control(double x, double v);
	integrator::Max_min_step get_max_min_step();
};
