#include <iostream>

int main() {
	char letter{ 'a' };

	while (letter <= 'z') {
		std::cout << letter << " " << +letter << '\n';
		letter++;
	}
}