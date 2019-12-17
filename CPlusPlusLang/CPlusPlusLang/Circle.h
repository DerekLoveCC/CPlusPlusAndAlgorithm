#pragma once
#include <iostream>
using namespace std;
class Circle {
 private:
  double radius;
  const int PI;

 public:
  void SetRadius(double radius);
  double GetRadius();
  double GetArea();
  double GetGirth();
  Circle& operator=(Circle& c);
  Circle();
  Circle(const Circle& c);
};
