#include "functions.hpp"

std::unordered_multiset<int> FindCommonDivisors(std::unordered_multiset<int>& firstGroupOfDivisors, const std::unordered_multiset<int>& secondGroupOfDivisors)
{
    std::unordered_multiset<int> commonDivisors;

    std::erase_if(firstGroupOfDivisors, [&](const auto &divisor)
    {
        if(secondGroupOfDivisors.contains(divisor))
        {
            commonDivisors.emplace(divisor);
            return true;
        }

        return false;
    });

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

int FindGreatestCommonDivisor(const std::unordered_multiset<int>& commonDivisors)
{
    int greatestCommonDivisor = 1;

    for(const auto &divisor: commonDivisors)
        greatestCommonDivisor *= divisor;

    return greatestCommonDivisor;
}
