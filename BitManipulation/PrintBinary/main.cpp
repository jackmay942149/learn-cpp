#include <iostream>
#include <cstdint>

int getUserInput() {
	int input{};
	std::cout << "Enter a number (0 - 255): ";
	std::cin >> input;
	return input;
	
}

int printBit(int input, int value) {
	int newInput{ input };

	if (input >= value) {
		std::cout << "1";
		newInput -= value;
	}
	else {
		std::cout << "0";
	}
	return newInput;
}

int main() {
	int userInput{ getUserInput() };

	userInput = printBit(userInput, 128);
	userInput = printBit(userInput, 64);
	userInput = printBit(userInput, 32);
	userInput = printBit(userInput, 16);
	userInput = printBit(userInput, 8);
	userInput = printBit(userInput, 4);
	userInput = printBit(userInput, 2);
	userInput = printBit(userInput, 1);
}