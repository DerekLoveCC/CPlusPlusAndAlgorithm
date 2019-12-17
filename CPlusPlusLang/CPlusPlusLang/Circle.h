#pragma once
#include <iostream>
using namespace std;
class Circle {
private:
	double radius;

public:
	void SetRadius(double radius);
	double GetRadius();
	double GetArea();
	double GetGirth();
	Circle& operator =(Circle& c);
	Circle() :radius(0)
	{
	}
	Circle(const Circle& c);
	//Circle(Circle& c);
};
struct StructTest {
	int a;
};