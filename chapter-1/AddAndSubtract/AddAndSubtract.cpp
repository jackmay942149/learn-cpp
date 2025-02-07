#include <iostream>

int main()
{
    int x{ 0 }, y{ 0 };

    std::cout << "Enter an integer : ";
    std::cin >> x;
    std::cout << "Enter another integer: ";
    std::cin >> y;

    std::cout << x << " + " << y << " is " << x + y << "." << std::endl;
    std::cout << x << " - " << y << " is " << x - y << "." << std::endl;
    return 0;
}

int doubleNumber(int x) {
    return x * 2;
}

