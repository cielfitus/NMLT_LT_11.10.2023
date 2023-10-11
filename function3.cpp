#include "function3.h"

using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Function to print all prime numbers less than n
void printPrimesLessThan(int n) {
    vector<int> primes;
    for (int i = 2; i < n; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    cout << "Prime numbers less than " << n << ": ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;
}

int function3() {
    int n;
    cout << "Problem 3 : Print all prime numbers < n \n";
    cout << "Please enter the number n: ";
    cin >> n;

    printPrimesLessThan(n);

    return 0;
}