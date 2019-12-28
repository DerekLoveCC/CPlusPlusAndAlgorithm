#include "LinearModeRandom.h"
LinearModeRandom::LinearModeRandom(unsigned long seed) {
    if (seed == 0) {
        randSeed = time(0);
    }
    else {
        randSeed = seed;
    }
}

unsigned short LinearModeRandom::Random(unsigned long n) {
    randSeed = MULTIPLIER * randSeed + ADDER;
    return (unsigned short)((randSeed >> 16) % n);
}

double LinearModeRandom::FloatRandom() {
    return Random(MAXSHORT) / double(MAXSHORT);
}
