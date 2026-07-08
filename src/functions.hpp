#pragma once

#include <unordered_set>

std::unordered_multiset<int> FindCommonDivisors(std::unordered_multiset<int>& firstGroupOfDivisors, std::unordered_multiset<int>& secondGroupOfDivisors);
std::unordered_multiset<int> PrimeFactorization(int naturalNumberForFactorization);
int FindGreatestCommonDivisor(const std::unordered_multiset<int>& commonDivisors);
