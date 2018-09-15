#include <iostream>
#include "gcd.hpp"

// GitHub repository not private - Student Pack request pending

int gcd(const int a, const int b) {
    int answer = 0;
    int max;
    int min;

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    for (int i = min; i <= max; i--) {
        if (max % i == 0 && min % i == 0) {
            answer = i;
            break;
        }
    }
    std::cout << "The greatest common denominator of " << a << " and " << b << " is " << answer << "." << std::endl;
    return 0;
}

int main() {

    // Example 1
    const int num1 = 165;
    const int num2 = 75;
    gcd(num1, num2);

    // Example 2
    const int num3 = 8;
    const int num4 = 6;
    gcd(num3, num4);

    // Example 3
    const int num5 = 73;
    const int num6 = 41;
    gcd(num5, num6);

    // Example 4
    const int num7 = 121;
    const int num8 = 132;
    gcd(num7, num8);

    return 0;
}