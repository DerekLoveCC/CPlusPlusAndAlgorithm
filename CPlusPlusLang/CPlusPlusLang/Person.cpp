#include "Person.h"
Person::Person(const char* n) {
  name = const_cast<char*>(n);
}
void Person::PrintName() const {
  cout << "PersonName:" << name << endl;
}