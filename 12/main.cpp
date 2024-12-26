#include "main.h"

int main() {
    std::string str = "Test string. Test string for testing";
    std::cout << "Original string: \"" << str << '\"' << std::endl << std::endl;

    std::cout << "The number of digits is "
        << digitNumber(str) << "."
        << std::endl;

    shiftLeft(str);
    std::cout << str << std::endl;

    shiftRight(str);
    std::cout << str << std::endl << std::endl;

    std::cout << "Count of combinations: " << countCombinations(str) << std::endl;
    std::cout << "String after remove between spaces: " << '\"' << removeBetween(str) << '\"' << std::endl;
    std::cout << "String after shifting: " << '\"' << stringShift(str) << '\"' << std::endl;
    std::cout << "String after reversing: " << '\"' << reverseFirstWord(str) << '\"' << std::endl;

    return 0;
}

