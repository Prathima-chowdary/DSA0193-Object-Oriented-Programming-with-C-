#include <iostream>
#include <cmath>

class Triangle {
public:
    float a, b, c;

    Triangle(float a, float b, float c) : a(a), b(b), c(c) {}

    void printAreaAndPerimeter() {
        float s = (a + b + c) / 2;
        float area = sqrt(s * (s - a) * (s - b) * (s - c));
        float perimeter = a + b + c;
        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
};

int main() {
    Triangle t(3, 4, 5);
    t.printAreaAndPerimeter();
    return 0;
}
