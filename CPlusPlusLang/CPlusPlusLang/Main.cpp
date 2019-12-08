#include <iostream>
#include "MethodOverload.h"
using namespace std;

int main() {
  int x = 5, y = 6;
  double a = 1, b = 2;
  float c = 1, d = 2;
  cout << compare(x, y) << endl
       << compare(a, b) << endl
       << compare(c, d) << endl;
}
