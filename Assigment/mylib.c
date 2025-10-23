#include <stdio.h>
#include <math.h>
#include "mylib.h"

// #Cp

// Helper: reverses digits of a number
static int reverseDigits(int value) {
    int rev = 0;
    while (value > 0) {
        rev = (rev * 10) + (value % 10);
        value /= 10;
    }
    return rev;
}

// Check if number is Armstrong
int isArmstrong(int number) {
    if (number < 0) return 0;

    int temp = number, sum = 0, digits = 0;

    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = number;
    while (temp != 0) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }

    return sum == number;
}

// Check if number is Adams
int isAdams(int number) {
    if (number < 0) return 0;

    int sq = number * number;
    int rev = reverseDigits(number);
    int revSq = rev * rev;

    return reverseDigits(sq) == revSq;
}

// Helper: checks primality
static int isPrime(int number) {
    if (number <= 1) return 0;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0)
            return 0;
    }
    return 1;
}

// Check if number is both prime and palindrome
int isPrimePalindrome(int number) {
    if (number < 0) return 0;
    return isPrime(number) && (number == reverseDigits(number));
}
