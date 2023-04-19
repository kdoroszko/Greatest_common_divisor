#include "functions.hpp"

std::unordered_set<int> PrimeFactorization(int naturalNumberForFactorization)
{
    int firstPrime = 2;
    std::unordered_set<int> divisors;

    if(naturalNumberForFactorization % firstPrime == 0)
        divisors.emplace(firstPrime);

    return divisors;
}
