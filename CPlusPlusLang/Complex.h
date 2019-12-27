#pragma once
class Complex
{
private:
	double real;
	double image;
public:
	Complex();
	~Complex();
	friend Complex& operator+(Complex c1, double realPart);
};

