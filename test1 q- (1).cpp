#include <iostream>
#include <cstring>

class String {
    char str[100];
public:
    String(const char* s) {
        strcpy(str, s);
    }

    bool operator==(const String& s) {
        return strcmp(str, s.str) == 0;
    }
};

int main() {
    String s1("Apple"), s2("orange");
    if (s1 == s2) {
        std::cout << "Both are equal\n";
    } else {
        std::cout << "Both are not equal\n";
    }
    return 0;
}
