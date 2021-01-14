#include <iostream>
#include "complex.h"

int main() {
    Complex a,b;

    a.real = 4;
    a.imaginary = 4.2;
    b.real = 3;
    b.imaginary = 5;
    std::cout << a + b;
    return 0;
}
