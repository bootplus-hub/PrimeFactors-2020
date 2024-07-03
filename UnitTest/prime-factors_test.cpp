#include "pch.h"
#include "../PrimeFactors/prime-factors.cpp"

#include <vector>
using namespace std;


TEST(TestCaseName, TestName) {
	PrimeFactor prime_factor;
	vector<int> expedted = {};
	EXPECT_EQ(expedted, prime_factor.of(1));
}