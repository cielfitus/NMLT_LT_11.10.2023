#include "function2.h"


using namespace std;

// Function to print prime divisors of n without repetition
void printPrimeDivisorsWithoutRepetition(int n) {
    // Initialize an empty vector to store prime divisors
    vector<int> primeDivisors;
    int x = n;
    // Initialize an unordered set to keep track of unique divisors
    unordered_set<int> uniqueDivisors;

    // Check for divisors starting from 2
    for (int i = 2; i <= n; i++) {
        // If i is a divisor of n
        while (n % i == 0) {
            // Check if i is a prime number
            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }

            // If i is prime and not already present in uniqueDivisors, add it to the divisors list
            if (isPrime && uniqueDivisors.find(i) == uniqueDivisors.end()) {
                primeDivisors.push_back(i);
                uniqueDivisors.insert(i);
            }

            // Reduce n by dividing it by i
            n /= i;
        }
    }

    // Print the prime divisors
    cout << "Prime divisors of " << x << " : ";
    for (int divisor : primeDivisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

int function2() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    printPrimeDivisorsWithoutRepetition(n);

    return 0;
}