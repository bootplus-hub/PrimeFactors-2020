#include "pch.h"
#include "../PrimeFactors/prime-factors.cpp"

#include <vector>
using namespace std;


TEST(PrimeFactors, Of1) {
	PrimeFactor prime_factor;
	vector<int> expedted = {};
	EXPECT_EQ(expedted, prime_factor.of(1));
}

TEST(PrimeFactors, Of2) {
	PrimeFactor prime_factor;
	vector<int> expedted = {2};
	EXPECT_EQ(expedted, prime_factor.of(2));
}