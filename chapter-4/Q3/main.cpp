// Step 1: ask user for tower height
// Step2: Output height at 0, 1, 2, 3, 4, 5s
// Condition: Ball must be above 0m
#include <iostream>


double getTowerHeight() {
	double height{};
	std::cout << "Enter the height of the tower in meters: ";
	std::cin >> height;
	return height;
}

double getBallHeight(int seconds) {
	double result{};
	double gravity{ 9.8 };
	result = gravity * seconds * seconds / 2;
	return result;
}

int main() {
	double towerHeight{ getTowerHeight() };
	
	double newBallHeight{};
	for (int i = 0; i < 6; i++) {
		
		newBallHeight = towerHeight - getBallHeight(i);
		if (newBallHeight > 0) {
			std::cout << "At " << i << " seconds, the ball is at height: " << newBallHeight << " meters" << std::endl;
		}
		else {
			std::cout << "At " << i << " seconds, the ball is on the ground." << std::endl;
		}
	}
	return 0;
}