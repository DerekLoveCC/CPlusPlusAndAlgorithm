#pragma once
#include "Person.h"
class Employee : public Person {
 public:
  void PrintName() const;
  Employee(const char* n);
};
