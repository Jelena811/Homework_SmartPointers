#include "digit_counter.h"
#include <cmath>
double DigitCounter::Warp(double number, double factor)
{
    double sum = number + factor;
    sum -= factor;
    return sum;
}

int DigitCounter::CountSameSignificantDigits(double a, double b)
{
    int epsilon = 1;
    while (epsilon <100)
    {
        if (fabs(a - b) < epsilon)
            epsilon++;
        else return epsilon;
    }
}
