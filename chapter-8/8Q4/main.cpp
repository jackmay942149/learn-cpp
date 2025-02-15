#include <iostream>

int main() {
	int i{ 1 };

	while (i < 6) {
		int j{ 5 };

		while (j > 0) {
			if (j <= i) {
				std::cout << j << " ";
			}
			else {
				std::cout  << " " << " ";
			}

			--j;
		}

		std::cout << std::endl;
		i++;
	}
}