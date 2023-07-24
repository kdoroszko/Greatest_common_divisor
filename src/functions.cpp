#include "functions.hpp"

std::unordered_set<int> PrimeFactorization(int naturalNumberForFactorization)
{
    int prime = 2;
    std::unordered_set<int> divisors;

    while(naturalNumberForFactorization != 1)
    {
        if(naturalNumberForFactorization % prime == 0)
        {
            divisors.emplace(prime);
            naturalNumberForFactorization /= prime;
        } else prime++;
    }

    return divisors;
}
