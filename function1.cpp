#include "function1.h"

using namespace std;

vector<int> getDivisors(int n) {
    vector<int> divisors;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

int function1() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> divisors = getDivisors(n);

    cout << "Divisors of " << n << " are: ";
    for (int divisor : divisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}