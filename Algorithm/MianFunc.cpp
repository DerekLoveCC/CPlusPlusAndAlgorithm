#include <iostream>
#include "LinearModeRandom.h"
using namespace std;

int main() {
    LinearModeRandom random;
    for (size_t i = 0; i < 10; i++)
    {
        unsigned short s = random.Random(10000);
        cout << s << endl;
    }
}