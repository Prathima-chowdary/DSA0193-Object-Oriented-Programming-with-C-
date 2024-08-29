#include <iostream>
#include <cmath>

class Area {
public:
    Area(float radius) {
        std::cout << "Area of circle: " << 3.14 * radius * radius << std::endl;
    }
    Area(float length, float breadth) {
        std::cout << "Area of rectangle: " << length * breadth << std::endl;
    }
    Area(float a, float b, float c) {
        float s = (a + b + c) / 2;
        std::cout << "Area of triangle: " << sqrt(s * (s - a) * (s - b) * (s - c)) << std::endl;
    }
};

int main() {
    Area circle(3);
    Area rectangle(4, 5);
    Area triangle(3, 4, 5);
    return 0;
}
