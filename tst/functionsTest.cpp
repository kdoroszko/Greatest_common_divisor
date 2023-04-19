#include "gtest/gtest.h"

#include "functions.hpp"
#include <unordered_set>

TEST(PrimeFactorization, TwoInUnorderedSet)
{
    std::unordered_set<int> testSet {2};

    ASSERT_EQ(testSet, PrimeFactorization(2));
}
