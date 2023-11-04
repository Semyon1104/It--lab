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
int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
	
}
