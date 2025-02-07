#include <iostream>

int main()
{

    // Asks for user input of a number and outputs double and triple that value to the console
    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;
    std::cout << "Double that number is: " << x * 2 << "\n";
    std::cout << "Triple that number is: " << x * 3 << std::endl;
    std::cin >> x;
    return 0;
}
