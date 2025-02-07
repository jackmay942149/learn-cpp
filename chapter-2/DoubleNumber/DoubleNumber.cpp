// DoubleNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int getUserInput() {
    int x{};
    std::cout << "Enter an integer: ";
    std::cin >> x;
    return x;
}

void printDouble(int x) {
    std::cout << "Double is: " << x * 2;
}

int main()
{
    int x{ getUserInput() };
    printDouble(x);
}


