#include "header/header.hpp"
#include <cmath>
int sum(int a, int b) {
	return a + b;
}
double divv(double a, double b) {
	if (b == 0) {
		throw "b = 0";
	}
	return a / b;
}
int mul(int a, int b) {
	return a*b;
}
int dif(int a, int b) {
	return a-b;
}
double coren(int a) {
	if (a < 0) {
		throw "a < 0";
	}
	return sqrt(a);
}
double st(int a, int b) {
	return pow(a, b);
}