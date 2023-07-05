#include "pch.h"
#include "../PrimeFactorsKata/prime-factors.cpp"

#include <vector>
using namespace std;

class PrimeFactorFixture : public testing::Test
{
public:
	PrimeFactor primeFactor;
};

TEST_F(PrimeFactorFixture, Of1) {
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFactor.of(1));
}

TEST_F(PrimeFactorFixture, Of2) {
	vector<int> expected = {2};

	EXPECT_EQ(expected, primeFactor.of(2));
}

TEST_F(PrimeFactorFixture, Of3) {
	vector<int> expected = { 3 };

	EXPECT_EQ(expected, primeFactor.of(3));
}

TEST_F(PrimeFactorFixture, Of6) {
	vector<int> expected = { 2, 3 };

	EXPECT_EQ(expected, primeFactor.of(6));
}

TEST_F(PrimeFactorFixture, Of4) {
	vector<int> expected = { 2, 2 };

	EXPECT_EQ(expected, primeFactor.of(4));
}

TEST_F(PrimeFactorFixture, Of9) {
	vector<int> expected = { 3, 3 };

	EXPECT_EQ(expected, primeFactor.of(9));
}

TEST_F(PrimeFactorFixture, Of12) {
	vector<int> expected = { 2, 2, 3 };

	EXPECT_EQ(expected, primeFactor.of(12));
}