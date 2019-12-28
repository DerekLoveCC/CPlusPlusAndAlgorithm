#pragma once
#include <time.h>
const unsigned long MAXSHORT = 65536L;
const unsigned long MULTIPLIER = 1194211693L;
const unsigned long ADDER = 12345L;
class LinearModeRandom
{
private:
    unsigned long randSeed;

public:
    LinearModeRandom(unsigned long seed = 0);
    unsigned short Random(unsigned long n); // produce random number between 0 and n-1
    double  FloatRandom(); // produce random number between 0 and exclusive 1: [0,1)
};
