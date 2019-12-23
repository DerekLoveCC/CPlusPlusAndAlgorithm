#pragma once
#include <iostream>
#include <string>
using namespace std;

class Person {
 protected:
  char* name;

 public:
  virtual void PrintName() const;
  Person(const char* n);
};
