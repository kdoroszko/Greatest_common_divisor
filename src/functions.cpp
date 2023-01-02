#include "functions.hpp"

int PrimeFactorization(int naturalNumberForFactorization)
{
    int divisor = 0, firstPrime = 2;

    if(naturalNumberForFactorization % firstPrime == 0)
        divisor = firstPrime;

    return divisor;
}
