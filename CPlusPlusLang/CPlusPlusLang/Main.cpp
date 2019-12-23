#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "Circle.h"
#include "Complex.h"
#include "Employee.h"
#include "MethodOverload.h"
#include "ReferenceVsPointor.h"
using namespace std;

void ReadFileToVector(string fileName) {
  ifstream in(fileName);
  vector<string> v;
  string line;

  while (getline(in, line)) {
    v.push_back(line);
  }

  for (size_t i = 0; i < v.size(); i++) {
    cout << v[i] << endl;
  }
}

int main() {
  const Person& person = Employee("Derek");
  person.PrintName();

  // ReadFileToVector("C:\\Users\\XJC\\Desktop\\test.txt");
  /* while (std::getline(in, line)) {

   }*/
}
