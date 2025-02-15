#include <iostream>


int main() {
	int x{};
	std::cout << "Enter a single digit number: ";
	std::cin >> x;

	if (x == 2)
		std::cout << "The digit is prime";
	else if (x == 3)
		std::cout << "The digit is prime";
	else if (x == 5)
		std::cout << "The digit is prime";
	else if (x == 7)
		std::cout << "The digit is prime";
	else
		std::cout << "The digit is not prime";
}