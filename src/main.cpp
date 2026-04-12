#include <iostream>
#include "functions.hpp"

int main()
{
    int firstNumber, secondNumber;

    std::cout << "Enter two natural numbers: ";
    std::cin >> firstNumber >> secondNumber;

    std::unordered_multiset<int> firstNumberDivisors = PrimeFactorization(firstNumber);
    std::unordered_multiset<int> secondNumberDivisors = PrimeFactorization(secondNumber);

    std::unordered_multiset<int> commonDivisors = FindCommonDivisors(firstNumberDivisors, secondNumberDivisors);

    int greatestCommonDivisor = FindGreatestCommonDivisor(commonDivisors);

    std::cout << "The greatest common divisor of " << firstNumber << " and " << secondNumber << " is: " << greatestCommonDivisor << '\n';

    return 0;
}
