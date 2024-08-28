#include <iostream>
#include <cmath>

int main() {
    int n, num = 2;
    std::cout << "Enter number of rows: ";
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << pow(num, i) << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
