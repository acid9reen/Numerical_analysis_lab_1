#include "integrators.h"

integrator::integrator(ddd_function func, double x, double v, double step, double eps_)
{
	point_info.curr_x = x;
	point_info.curr_v = v;
	point_info.curr_step = step;

	eps = eps_;
	mul_count = 0;
	div_count = 0;
}
