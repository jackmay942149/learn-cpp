#include <iostream>
#include <string_view>

// Write the function getQuantityPhrase() here
std::string_view getQuantityPhrase(int x) {
    std::string_view result;

    switch (x) {
        case 0:
            result = "no";
            break;
        case 1:
            result = "a single";
            break;
        case 2:
            result = "a couple of";
            break;
        case 3:
            result = "a few";
            break;
        default:
            (x < 0) ? result = "negative" : result = "many";
            break;
    }

    return result;
}

// Write the function getApplesPluralized() here
std::string_view getApplesPluralized(int x) {
    return (x == 1) ? "apple" : "apples";
}

int main()
{
    constexpr int maryApples{ 3 };
    std::cout << "Mary has " << getQuantityPhrase(maryApples) << ' ' << getApplesPluralized(maryApples) << ".\n";

    std::cout << "How many apples do you have? ";
    int numApples{};
    std::cin >> numApples;

    std::cout << "You have " << getQuantityPhrase(numApples) << ' ' << getApplesPluralized(numApples) << ".\n";

    return 0;
}