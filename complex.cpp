#include "complex.h"
#include <iostream>
#include <cmath>

using namespace std;

Complex operator + (const Complex& a, const Complex& b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}


Complex operator - (const Complex& a, const Complex& b)
{
    Complex result;
    result.real = a.real - b.real;
    result.imaginary = a.imaginary - b.imaginary;
    return result;
}



Complex operator * (const Complex& a, const Complex& b)
{
    Complex result;
    result.real = a.real * b.real - a.imaginary * b.imaginary;
    result.imaginary = a.real * b.imaginary + a.imaginary * b.real;
    result.real = round(result.real * 100) / 100;
    result.imaginary = round(result.imaginary * 100) / 100;
    return result;
}


Complex operator / (const Complex& a, const Complex& b)
{
    if (b.real != 0 && b.imaginary != 0) {
        Complex result;
        result.real = (a.real * b.real + a.imaginary * b.imaginary) /
                   (b.real * b.real + b.imaginary * b.imaginary);
        result.imaginary = (b.real * a.imaginary - b.imaginary * a.real) /
                        (b.real * b.real + b.imaginary * b.imaginary);
        result.real = std::round(result.real * 100) / 100;
        result.imaginary = std::round(result.imaginary * 100) / 100;
        return result;
    }
    else
        throw logic_error("Can`t division by zero");
}


Complex operator << (std::ostream& out, const Complex& a) {
    if (a.real == 0 && a.imaginary == 0) {
        out << 0;
    } else {
        if (a.real != 0) {
            out << a.real;
            if (a.imaginary > 0) {
                out << '+';
            }
        }
        if (a.imaginary != 0) {
            if (a.imaginary == 1) {
                out << 'i';
            } else if (a.imaginary == -1) {
                out << "-i";
            } else {
                out << a.imaginary << 'i';
            }
        }
    }
    return reinterpret_cast<Complex &&>(out);
}

