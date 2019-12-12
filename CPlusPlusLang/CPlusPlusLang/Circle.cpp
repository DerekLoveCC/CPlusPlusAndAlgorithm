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