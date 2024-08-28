#include <iostream>

bool isPalindrome(int num) {
    int original = num, reverse = 0;
    while (num > 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    return original == reverse;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (isPalindrome(num)) {
        std::cout << "It is a Palindrome" << std::endl;
    } else {
        std::cout << "It is not a Palindrome" << std::endl;
    }
    return 0;
}
