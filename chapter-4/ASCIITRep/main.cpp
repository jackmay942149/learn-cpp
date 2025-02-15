#include<iostream>

int main() {
	char x{};

	std::cout << "Enter a single character: ";
	std::cin >> x;

	std::cout << "You enterted '" << x << "' which has ASCII code " << static_cast<int>(x) << ".";
}