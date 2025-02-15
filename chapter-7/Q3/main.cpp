#include <iostream>

static int accumulater{ 0 };

constexpr int accumulate(int input) {
    accumulater += input;
    return accumulater;
}

int main()
{
    std::cout << accumulate(4) << '\n'; // prints 4
    std::cout << accumulate(3) << '\n'; // prints 7
    std::cout << accumulate(2) << '\n'; // prints 9
    std::cout << accumulate(1) << '\n'; // prints 10

    return 0;
}