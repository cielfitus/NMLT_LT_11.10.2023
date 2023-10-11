#include "function3.h"
#include "function1.h"
#include "CheckPrime.h"
#include <iostream>
#include <vector>

using namespace std;

vector<int> primeNumber(int n) {
	vector<int> res;
	for (int i = 2; i < n; ++i)
		if (isPrime(i)) res.push_back(i);
	return res;
}