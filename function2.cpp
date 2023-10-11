#include "function2.h"
#include "function1.h"
#include "CheckPrime.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> primeDivisor(int n) {
	vector<int> divisors = getDivisors(n), res;
	for (int divisor : divisors)
		if (isPrime(divisor)) res.push_back(divisor);
	return res;
}
