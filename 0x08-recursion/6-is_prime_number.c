#include "main.h"

int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it's not a prime number
        }
    }
    return 1; // num is a prime number
}
