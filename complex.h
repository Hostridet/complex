#include <iosfwd>

struct Complex {
    double real = 0;
    double imaginary = 0;
};

Complex operator + (const Complex& a, const Complex& b);

Complex operator - (const Complex& a, const Complex& b);

Complex operator * (const Complex& a, const Complex& b);

Complex operator / (const Complex& a, const Complex& b);

Complex operator << (std::ostream& out, const Complex& a);