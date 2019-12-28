#include "NumericCalculation.h"
#include "LinearModeRandom.h"
double NumericCalculation::CalculatePI(unsigned int n) {
    LinearModeRandom random;
    size_t k = 0;
    for (size_t i = 0; i < n; i++)
    {
        double x = random.FloatRandom();
        double y = random.FloatRandom();
        if (x * x + y * y <= 1) {
            k++;
        }
    }

    size_t t = 4 * k;

    return t / double(n);
}