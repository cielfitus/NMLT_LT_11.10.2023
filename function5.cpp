#include "function5.h"

// Function to calculate the combination C(n, k)
long long combination(long long n, long long k) {
    if (k > n - k) {
        k = n - k; // Optimize to calculate the smaller value of k
    }

    long long result = 1;

    for (int i = 0; i < k; i++) {
        result *= (n - i);
        result /= (i + 1);
    }

    return result;
}

