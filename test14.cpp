#include <iostream>

class Degree {
public:
    void getDegree() {
        std::cout << "I got a Degree" << std::endl;
    }
};

class Undergraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am an Undergraduate" << std::endl;
    }
};

class Postgraduate : public Degree {
public:
    void getDegree() {
        std::cout << "I am a Postgraduate" << std::endl;
    }
};

int main() {
    Degree d;
    Undergraduate u;
    Postgraduate p;

    d.getDegree();
    u.getDegree();
    p.getDegree();

    return 0;
}
