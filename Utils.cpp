#include "Utils.h"

//
// User defined functions
//

//double utils::function_1(double x, double y /* =0 */)
//{
//	return exp(2 * x);
//}

double utils::calc_func_1(double x, double y1, double y2, parameter param /* =0 */)
{
	return y2;
}

double utils::calc_func_2(double x, double y1, double y2, parameter param /* =0 */)
{
	return (-param.a*y2*abs(y2) - param.b*y2 - param.c*y1);
}


//
// Numerical methods
//

std::vector<double> utils::runge_kutta_4_system(dddp_function calc_func_1,
	dddp_function calc_func_2,
	double step, double x, double y1, double y2, parameter param)
{
	double k1_1 = calc_func_1(x, y1, y2, param);
	double k1_2 = calc_func_2(x, y1, y2, param);
	
	double k2_1 = calc_func_1(x + step / 2.0, y1 + 0.5 * step * k1_1, y2 + 0.5 * step * k1_2, param);
	double k2_2 = calc_func_2(x + step / 2.0, y1 + 0.5 * step * k1_1, y2 + 0.5 * step * k1_2, param);
	
	double k3_1 = calc_func_1(x + step / 2.0, y1 + 0.5 * step * k2_1, y2 + 0.5 * step * k2_2, param);
	double k3_2 = calc_func_2(x + step / 2.0, y1 + 0.5 * step * k2_1, y2 + 0.5 * step * k2_2, param);

	double k4_1 = calc_func_1(x + step, y1 + step * k3_1, y2 + step * k3_2, param);
	double k4_2 = calc_func_2(x + step, y1 + step * k3_1, y2 + step * k3_2, param);

	double y1_next = y1 + (step / 6.0) * (k1_1 + 2.0 * k2_1 + 2.0 * k3_1 + k4_1);
	double y2_next = y2 + (step / 6.0) * (k1_2 + 2.0 * k2_2 + 2.0 * k3_2 + k4_2);

	std::vector<double> y_next = { y1_next, y2_next };
	return y_next;
}

std::vector<double> utils::next_point(num_method method, dddp_function func1, dddp_function func2,
	double x, double y1, double y2, double step, parameter param)
{
	std::vector<double> half_step_1;
	std::vector<double> half_step_2;
	std::vector<double> y1y2_next = method(func1, func2, step, x, y1, y2, param);;
	double x_next = x + step;
	double current_step = step;//current_step - шаг для вычисления текущей точки {x_next, v_next}
	half_step_1 = method(func1, func2, step / 2., x, y1, y2, param); // получаем v_{n+1/2} из точки (x_{n}, v_{n}) с шагом h/2
	half_step_2 = method(func1, func2, step / 2., x + step / 2., half_step_1[0], half_step_1[1], param);
	double error_estim = sqrt(pow((half_step_2[0] - y1y2_next[0]), 2) + pow((half_step_2[1] - y1y2_next[1]), 2)) / (pow(2, 4) - 1)*pow(2, 4);
	
	std::vector<double> point = { x_next, y1y2_next[0], y1y2_next[1], step, current_step, half_step_2[0], half_step_2[1], error_estim,0,0 };

	return point;
}


std::vector<double> utils::next_point_with_step_control(num_method method, dddp_function func1, dddp_function func2,
	double x, double y1, double y2, double step, double eps, parameter param, double max_Iter)
{
	std::vector<double> whole_step;
	std::vector<double> half_step_1;
	std::vector<double> half_step_2;
	double error, c1_multipl=0, c2_divis=0;
	double x_next=0;
	std::vector<double> y1y2_next ;
	double current_step=0;


	for(int i=0; i<max_Iter; i++)
	{
		whole_step = method(func1, func2, step, x, y1, y2, param); // получаем новые у1, у2 с шагом step
		half_step_1 = method(func1, func2, step / 2., x, y1, y2, param); 
		half_step_2 = method(func1, func2, step / 2., x + step / 2., half_step_1[0], half_step_1[1], param); 

		error = sqrt(pow((half_step_2[0] - whole_step[0]),2)+ pow((half_step_2[1] - whole_step[1]), 2)) / (pow(2, 4) - 1); // 4 because we use 4th order method

		if (error > eps) {
			step /= 2.;
			c2_divis++;
		}
		else if (error < eps / pow(2, 4 + 1))
		{
			x_next = x + step;
			y1y2_next = whole_step;
			current_step = step;
			step *= 2.;
			c1_multipl++;
			break;
		}
		else
		{
			x_next = x + step;
			y1y2_next = whole_step;
			current_step = step;
			break;
		}
	}
	//current_step - шаг для вычисления текущей точки {x_next, v_next}

	std::vector<double> point = { x_next, y1y2_next[0], y1y2_next[1], step, current_step, half_step_2[0], half_step_2[1], error * pow(2, 4),c1_multipl,c2_divis };

	return point;

}