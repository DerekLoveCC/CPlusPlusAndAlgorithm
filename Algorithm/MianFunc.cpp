#include <iostream>
#include "LinearModeRandom.h"
#include "NumericCalculation.h"
using namespace std;

int main() {
    /*LinearModeRandom random;
    for (size_t i = 0; i < 10; i++)
    {
        unsigned short s = random.Random(10000);
        cout << s << endl;
    }*/


    NumericCalculation nc;
    for (size_t i = 1000; i <= 100000; i += 1000)
    {
        cout << i << ":PI-" << nc.CalculatePI(i) << endl;
    }
}