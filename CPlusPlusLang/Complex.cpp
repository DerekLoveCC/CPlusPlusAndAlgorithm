#include "Complex.h"



Complex::Complex()
{
}


Complex::~Complex()
{
}

Complex& operator+(Complex c1, double realPart) {
	Complex result = c1;
	result.real += realPart;
	return result;
}
