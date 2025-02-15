#include <cstdint> // for std::uint8_t
#include <iostream>

int main()
{
    constexpr int legalAge{ 16 };
    std::cout << "How old are you?\n";

    std::uint16_t age{};
    std::cin >> age;

    std::cout << "Allowed to drive a car in Texas: ";

    if (age >= legalAge)
        std::cout << "Yes";
    else
        std::cout << "No";

    std::cout << ".\n";

    return 0;
}