#include "cppmath.hpp"
#include <iostream>

int main(int arc, char *argv[]) {
	std::cout << "Basics" << std::endl;
	std::cout << "5 to the power of 2 is: " << cppmath::pow(5, 2) << std::endl;
	std::cout << "factorial of 5 is: " << cppmath::factorial(5) << std::endl;
}