#include "trygonometria.h"
#ifdef USE_TRIGONOMETRY_DEGREE
#else
	#include <cmath>
#endif

int main() {

#ifdef USE_TRIGONOMETRY_DEGREE
	double wynik_sin=degreemath::sin_deg(90.0);
	double wynik_cos=degreemath::cos_deg(0.0);
	double wynik_tg=degreemath::tg_deg(45.0);
	double wynik_ctg=degreemath::ctg_deg(45.0);
#else
	double wynik_sin=sin(90.0);
	double wynik_cos=cos(0.0);
	double wynik_tg=tan(45.0);
	double wynik_ctg=1/tan(45.0);
	
#endif
	return 0;
}