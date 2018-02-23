#include "trygonometria.h"
#include <cmath>
double degreemath::sin_deg(double degree)
{
	double pi = 3.141592627;
	double wynik = pi/degree*180;
	return std::sin(wynik);
}
double degreemath::cos_deg(double degree)
{
	double pi = 3.141592627;
	double wynik = pi/degree*180;
	return std::cos(wynik);
}
double degreemath::tg_deg(double degree)
{
	double pi = 3.141592627;
	double wynik = pi/degree*180;
	return std::tan(wynik);
}
double degreemath::ctg_deg(double degree)
{
	double pi = 3.141592627;
	double wynik = pi/degree*180;
	double cotan = 1/tan(wynik);
	return cotan;
}