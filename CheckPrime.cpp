#include <iostream>
#include "CheckPrime.h"
using namespace std;

bool isPrime(int x) {
	if (x < 2) return 0;
	for (int i = 2; i * i <= x; ++i)
		if (x % i == 0) return 0;
	return 1;
}