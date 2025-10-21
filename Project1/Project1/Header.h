#pragma once
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
//а в пределы интегрирования, I - решенный интеграл
double a, b;
// п число отрезков разбиения, к число символов после запятой в ответе
int n, k, I;
double f(double x)
{
	return 1 / (x * log(x));
}
double reshenie(double a, double b, int n)
{
	double I;
	double s = (f(a) + f(b)) / 2;
	double h = (b - a) / n;
	for (int i = 1; i <= n - 1; i++)
	{
		s += f(a + i * h);
		I = h * s;
	}
	return I;
}