#include "functions.hpp"

std::unordered_set<int> FindCommonDivisors(const std::unordered_set<int>& firstGroupOfDivisors, const std::unordered_set<int>& secondGroupOfDivisors)
{
    std::unordered_set<int> commonDivisors;

    for(const auto &divisor: firstGroupOfDivisors)
        if(secondGroupOfDivisors.contains(divisor))
            commonDivisors.emplace(divisor);

    return commonDivisors;
}

std::unordered_multiset<int> PrimeFactorization(int naturalNumberForFactorization)
{
    int prime = 2;
    std::unordered_multiset<int> divisors;

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
