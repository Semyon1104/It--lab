#include <iostream>
#include "header/header.hpp"

int main(int argc, char** argv) {
	int a = 30, b = 10, c = 2, d = 1;
	std::cout << mul(d, sum(dif(a, b), divv(b, c)))<<std::endl;
	return 0;
	
}
