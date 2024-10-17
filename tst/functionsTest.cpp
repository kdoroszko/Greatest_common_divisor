#include "gtest/gtest.h"

#include "functions.hpp"
#include <unordered_set>

TEST(PrimeFactorization, OneDivisor)
{
    std::unordered_multiset<int> testSet {2};

    ASSERT_EQ(testSet, PrimeFactorization(2));
}

TEST(PrimeFactorization, TwoDivisors)
{
    std::unordered_multiset<int> testSet {2, 3};

    ASSERT_EQ(testSet, PrimeFactorization(6));
}

TEST(PrimeFactorization, RepeatingDivisor)
{
    std::unordered_multiset<int> testSet {2, 2, 7};

    ASSERT_EQ(testSet, PrimeFactorization(28));
}
