#include <iostream>
#include "function1.h"
#include "function2.h"
#include "function3.h"

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
    } cout << "\n\n";
}

int main()
{
    function1();
    function2();
    function3();
    return 0;
}

