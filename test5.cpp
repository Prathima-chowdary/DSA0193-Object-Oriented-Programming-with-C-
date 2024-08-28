#include <iostream>

void reverse(char *str) {
    char *end = str;
    while (*end) {
        ++end;
    }
    --end;
    while (end >= str) {
        std::cout << *end;
        --end;
    }
    std::cout << std::endl;
}

int main() {
    char str[] = "Hello";
    reverse(str);
    return 0;
}
