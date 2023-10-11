#include "function2.h"


using namespace std;

vector<int> getPrimeDivisors(int n) {
    vector<int> primeDivisors;
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            primeDivisors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        primeDivisors.push_back(n);
    }
    return primeDivisors;
}

int function2() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> primeDivisors = getPrimeDivisors(n);

    cout << "Prime divisors of " << n << " are: ";
    for (int divisor : primeDivisors) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}