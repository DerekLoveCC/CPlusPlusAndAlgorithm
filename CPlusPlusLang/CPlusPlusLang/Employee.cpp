#include "Employee.h"
void Employee::PrintName() const{
  cout << "Employee:" << name << endl;
}
Employee::Employee(const char* n) : Person(n) {}