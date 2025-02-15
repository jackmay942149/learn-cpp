#include <iostream>

int getInputInt() {
	int x{};
	std::cout << "Enter an integer: ";
	std::cin >> x;
	return x;
}

char getInputChar() {
	char x{};
	std::cout << "Enter an operater (+, -, *, /, %): ";
	std::cin >> x;
	return x;
}

int calculate(int x, int y, char oper) {

	bool inputError = false;
	int result{};

	do {
		switch (oper) {
		case '+': result = x + y;
			return result;
		case '-': result = x - y;
			return result;
		case '*': result = x * y;
			return result;
		case '/': result = x / y;
			return result;
		case '%': result = x % y;
			return result;
		default:
			std::cout << "Entered operator incorrectly!!!";
			oper = getInputChar();
			inputError = true;
		}
	} while (inputError);

}

int main() {
	int x{ getInputInt() };
	int y{ getInputInt() };
	char oper{ getInputChar() };

	// If operator is entered incorrectly it will get shadow changed in this func  (be careful)
	int result{ calculate(x, y, oper) }; 
	std::cout << "The calculation " << x << " " << oper << " " << y << " = " << result << std::endl;

	return 0;
}