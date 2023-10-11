#include <iostream>
#include "function1.h"
#include "function2.h"
#include "function3.h"
#include "function4.h"
#include "function5.h"

void function1() {
    int n;
    cout << "Problem 1 : Print all divisor of n \n";
    cout << "Please enter the number n: ";
    cin >> n;

    vector<int> divisors = getDivisors(n);

    cout << "Divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    } cout << "\n\n";
}

void function2() {
    int n;
    cout << "Problem 2 : Print all prime divisor of n \n";
    cout << "Please enter the number n: ";
    cin >> n;

    vector<int> divisors = primeDivisor(n);

    cout << "Prime divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    } cout << "\n\n";
}

void function3() {
    int n;
    cout << "Problem 3 : Print all prime numbers < n \n";
    cout << "Please enter the number n: ";
    cin >> n;

    vector<int> divisors = primeNumber(n);

    cout << "Prime numbers less than " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    } 
    cout << "\n\n";
}

void function4() {
    int n;
    cout << "Problem 4 : Print all symmetrical numbers < n \n";
    cout << "Please enter the number n: ";
    cin >> n;
    cout << "Symmetrical numbers less than " << n << ": ";
    for (int i = 0; i < n; i++) {
        if (isSymmetrical(i)) {
            cout << i << " ";
        }
    }
    cout << "\n\n";
}

void function5() {
    long long n, k;
    again:
    cout << "Problem 5 : Combination of n choose k \n";
    cout << "Please enter the number n and k: ";
    cin >> n >> k;
    if (k > n) {
        cout << "n >= k >= 0 \n";
        goto again;
    }
    cout << "Combination of n choose k : C(n, k) = n! / [(n - k)! * k!] = " << combination(n, k) << "\n\n";
}

int main()
{
    function1();
    function2();
    function3();
    function4();
    function5();
    return 0;
}

