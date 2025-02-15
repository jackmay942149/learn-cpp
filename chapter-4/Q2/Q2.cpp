#include <iostream>

double getUserInputDouble() {
	double input{};
	std::cout << "Enter a double value: ";
	std::cin >> input;
	return input;
}

char getUserInputChar() {
	char input{};
	std::cout << "Enter +, -, * or /: ";
	std::cin >> input;
	return input;
}

int main() {
	double x{ getUserInputDouble() };
	double y { getUserInputDouble() };
	char operand{ getUserInputChar() };

	double result{};
	switch (operand) {
		case '+':
			result = x + y;
			break;
		case '-':
			result = x - y;
			break;
		case '*':
			result = x * y;
			break;
		case '/':
			result = x / y;
			break;
		default:
			return -1;
	}

	std::cout << x << " " << operand << " " << y << " is " << result;
}