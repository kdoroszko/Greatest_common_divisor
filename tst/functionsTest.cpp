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

TEST(FindCommonDivisors, OneCommonDivisor)
{
    std::unordered_multiset<int> firstTestGroupOfDivisors {3, 5, 7};
    std::unordered_multiset<int> secondTestGroupOfDivisors {2, 7};
    std::unordered_multiset<int> commonDivisors {7};

    ASSERT_EQ(commonDivisors, FindCommonDivisors(firstTestGroupOfDivisors, secondTestGroupOfDivisors));
}

TEST(FindCommonDivisors, TwoCommonDivisors)
{
    std::unordered_multiset<int> firstTestGroupOfDivisors {3, 5, 7};
    std::unordered_multiset<int> secondTestGroupOfDivisors {2, 3, 7};
    std::unordered_multiset<int> commonDivisors {3, 7};

    ASSERT_EQ(commonDivisors, FindCommonDivisors(firstTestGroupOfDivisors, secondTestGroupOfDivisors));
}

TEST(FindCommonDivisors, RepeatingCommonDivisors)
{
    std::unordered_multiset<int> firstTestGroupOfDivisors {3, 3, 5, 7};
    std::unordered_multiset<int> secondTestGroupOfDivisors {2, 3, 3, 7};
    std::unordered_multiset<int> commonDivisors {3, 3, 7};

    ASSERT_EQ(commonDivisors, FindCommonDivisors(firstTestGroupOfDivisors, secondTestGroupOfDivisors));
}
