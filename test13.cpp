#include <iostream>

int factorial(int n) {
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}

int main() {
    int n = 5;
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)factorial(i) / i;
    }
    std::cout << "Sum of the series: " << sum << std::endl;
    return 0;
}
