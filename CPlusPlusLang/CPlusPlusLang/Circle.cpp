#include "Circle.h"
double Circle::GetArea() {
  return 3.14 * radius * radius;
}

double Circle::GetRadius() {
  return radius;
}

void Circle::SetRadius(double radius) {
  this->radius = radius;
}

double Circle::GetGirth()
{
	return 3.14 * 2 * radius;
}

Circle::Circle(const Circle& c):PI(3.14) {
	cout << "Const copy constructor" << endl;
	this->radius = c.radius;
}

Circle& Circle::operator =(Circle& c) {
	Circle a;
	cout << "= is called" << endl;
	return a;
}

Circle::Circle() : PI(3.14) {}