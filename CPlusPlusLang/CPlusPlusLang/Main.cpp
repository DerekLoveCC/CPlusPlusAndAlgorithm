#include "MethodOverload.h"
#include "ReferenceVsPointor.h"
#include "Circle.h"
#include "Complex.h"
#include<string.h>
#include <iostream>
using namespace std;







int main()
{
	/*name names[3] = { name("1"),name("2"),name("3") };
	return 0;*/

	Circle c1;
	Circle c2;
	c1.operator=(c2);
	//Circle c3 = c2;
	//c1 = c2;
}
