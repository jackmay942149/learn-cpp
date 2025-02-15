#include <iostream>
#include <string>

int main() {
	std::cout << "Enter the name of Person #1: ";
	std::string p1Name{};
	std::getline(std::cin >> std::ws, p1Name);
	std::cout << "Enter the age of " << p1Name << ": ";
	int p1Age{};
	std::cin >> p1Age;

	std::cout << "Enter the name of Person #2: ";
	std::string p2Name{};
	std::getline(std::cin >> std::ws, p2Name);
	std::cout << "Enter the age of " << p2Name << ": ";
	int p2Age{};
	std::cin >> p2Age;

	if (p1Age > p2Age) {
		std::cout << p1Name << "(age " << p1Age << ") is older than " << p2Name << " (age " << p2Age << ").";
	}
	else {
		std::cout << p2Name << " (age " << p2Age << ") is older than " << p1Name << " (age " << p1Age << ").";

	}
}