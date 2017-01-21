//
//  Complex.cpp
//  ComplexNumbers
//
//  Created by Jett Farmer on 1/21/17.
//  Copyright © 2017 Jett Farmer. All rights reserved.
//
#include "Complex.hpp"

ostream&operator<<(ostream&outfile,const Complex&z)
{
    if (z.rPart == 0) outfile << z.iPart << "i";
    else outfile << z.rPart << "+" << z.iPart << "i";
    return outfile;
}

Complex Complex::operator+(const Complex& operand) const {
    float realSum = rPart + operand.rPart;
    float imaginarySum = iPart + operand.iPart;
    return Complex(realSum, imaginarySum);
};

Complex Complex::operator+(float operand) const {
    float realSum = rPart + operand;
    return Complex(realSum, iPart);
};
