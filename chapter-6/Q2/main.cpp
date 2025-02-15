#include <iostream>

constexpr bool isEven(int x) {
	return (x % 2) == 0;
}

int main() {
	int input{};

	std::cout << "Enter an integer: ";
	std::cin >> input;

	std::cout << input << (isEven(input) ? " is even" : " is odd");
}