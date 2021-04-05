

#include "Methods.h"


double suma(double a, double b)
{
	return a+b;
}

double resta(double a, double b)
{
	return a-b;
}

double mult(double a, double b)
{
	return a*b;
}

double div(double a, double b)
{
	return a/b;
}

double equals(std::deque<double> var, int op)
{
	double a = var.front();
	var.pop_front();
	double b = var.front();
	var.pop_front();

	double result;
	switch(op)
	{
		case 1: result = suma(a,b);
				break;
		case 2: result = resta(a,b);
				break;
		case 3: result = mult(a,b);
				break;
		case 4: result = div(a,b);
				break;
		default: return a;
	}
	return result;
}

double sqRoot(double a)
{
	return sqrt(a);
}

double percentage(std::deque<double> var, int op)
{
    double a = var.front();
	var.pop_front();
	double b = var.front();
	var.pop_front();

	double c = b * 0.01 * a;

	double result;
	switch(op)
	{
		case 1: result = suma(a,c);
				break;
		case 2: result = resta(a,c);
				break;
		case 3: result = c;
				break;
		case 4: result = div(a, b * 0.01);
				break;
		default: return a;
	}
	return result;
}

bool checkDot(std::wstring s)
{
	int a = s.find('.');
	if (a == s.npos) {
		 return true;
	}
	else return false;
}
