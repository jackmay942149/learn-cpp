#include <iostream>

int readNumber() {
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

void writeAnswer(int x) {
	std::cout << "The answer to the problem is: " << x;
	return;
}