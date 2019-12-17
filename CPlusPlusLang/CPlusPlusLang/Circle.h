#pragma once
class Circle {
 private:
  double radius;
  const int pi;

 public:
  void SetRadius(double radius);
  double GetRadius();
  double GetArea();
  double GetGirth();
  Circle();
};
