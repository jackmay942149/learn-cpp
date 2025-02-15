#include <iostream>
int getUserInput();

int main() {
	int smaller{ getUserInput() };
	int larger{ getUserInput() };

	if (smaller > larger) {
		std::cout << "Swapping the values" << std::endl;
		int temp = smaller;
		smaller = larger;
		larger = temp;
	}

	std::cout << "The smaller value is " << smaller << std::endl;
	std::cout << "The larger value is " << larger << std::endl;
}

int getUserInput() {
	int res{};
	std::cout << "Enter an integer: ";
	std::cin >> res;
	return res;
}