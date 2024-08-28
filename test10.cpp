#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer number: ";
    std::cin >> num;
    int leastSignificantDigit = num % 10;
    int nextLeastSignificantDigit = (num / 10) % 10;
    std::cout << "The least significant digit is " << leastSignificantDigit << std::endl;
    std::cout << "The next least significant digit is " << nextLeastSignificantDigit << std::endl;
    return 0;
}
