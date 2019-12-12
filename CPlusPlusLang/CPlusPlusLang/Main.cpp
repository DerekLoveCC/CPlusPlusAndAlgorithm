#include "MethodOverload.h"
#include "ReferenceVsPointor.h"
#include "Circle.h"
#include <iostream>
using namespace std;
int s = 100;
int main()
{
    int a;
    int b;
    cout << "please int a and b" << endl;

    cin >> a >> b;
    cout << a << " " << b << endl;


    Circle c;
    c.SetRadius(10);
    cout << c.GetArea() << endl;
}
