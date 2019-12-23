#include "MethodOverload.h"
int compare(int x, int y) {
  cout << "int compare"<<endl;
  if (x > y)
    return 0;
  else
    return 1;
}
float compare(float x, float y) {
  cout << "float compare"<<endl;
  if (x > y)
    return 0;
  else
    return 1;
}

double compare(double a, double b) {
  cout << "double compare"<<endl;
  if (a > b)
    return 0;
  else
    return 1;
}

