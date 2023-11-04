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
int main() {
	::testing::InitGoogleTest(&args, argv);
	return RUN_ALL_TESTS();
	
}
