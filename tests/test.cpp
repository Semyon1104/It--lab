#include <iostream>
#include "header/header.hpp"
#include <gtest/gtest.h>


TEST(test_group, test_1) {
	//Arange Act Assert
	int a = 5, b = 6; 
	int c;               //Arange
	c = sum(a, b);      //Act
	ASSERT_EQ(c, a + b);     //Assert
}

TEST(test_group, test_2) {
	int a = 5, b = 6;
	int c;
	c = dif(a, b);
	ASSERT_EQ(c, a - b);
}

TEST(test_group, test_3) {
	int a = 5, b = 6;
	int c;
	c = mul(a, b);
	ASSERT_EQ(c, a * b);
}

TEST(test_group, test_4) {
	double a = 30, b = 6;
	double c;
	c = divv(a, b);
	ASSERT_EQ(c, a / b);
}

TEST(test_group, test_5) {
	double a = 30, b = 6;
	ASSERT_NO_THROW(divv(a, b));
}

TEST(test_group, test_6) {
	int a = 30, b = 6;
	ASSERT_NO_THROW(sum(a, b));
}

TEST(test_group, test_7) {
	int a = 30, b = 6;
	ASSERT_NO_THROW(dif(a, b));
}

TEST(test_group, test_8) {
	int a = 30, b = 6;
	ASSERT_NO_THROW(mul(a, b));
}

TEST(test_group, test_9) {
	double a = 30.0, b = 0.0;
	ASSERT_ANY_THROW(divv(a, b));
}

TEST(test_group, test10) {
	int a = 23;
	ASSERT_NO_THROW(coren(a));
}

TEST(test_group, test_11) {
	int a = -23;
	ASSERT_ANY_THROW(coren(a));
}

TEST(test_group, test_12) {
	int a = 25;
	EXPECT_EQ(5, coren(a));
}

TEST(test_group, test_13) {
	int a = 2, b = 5;
	EXPECT_EQ(32, st(a, b));
}

TEST(test_group, test_14) {
	int a = 2, b = 5;
	ASSERT_NO_THROW(st(a, b));
}

TEST(test_group, test_15) {
	int a = 2, b = -5;
	ASSERT_NO_THROW(st(a, b));
}
int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	
}
