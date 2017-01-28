//
//  Complex.cpp
//  ComplexNumbers
//
//  Created by Jett Farmer on 1/21/17.
//  Copyright © 2017 Jett Farmer. All rights reserved.
//
#include "Complex.hpp"

// MARK: - Static Properties

Complex const Complex::i = Complex(0, 1);

// MARK: - Constructors

Complex::Complex():rPart(1.0), iPart(1.0) {};

Complex::Complex(float real, float imaginary): rPart(real), iPart(imaginary) {};

// MARK: - Assignment

const Complex& Complex::operator=(float operand) {
    rPart = operand;
    iPart = 1.0;
    return *this;
};

const Complex& Complex::operator=(const Complex& operand) {
    if (this != &operand) {
        rPart = operand.rPart;
        iPart = operand.iPart;
    }
    
    return *this;
};

// MARK: - Output Stream

ostream&operator<<(ostream&outfile,const Complex&z)
{
    if (z.rPart == 0) outfile << z.iPart << "i";
    else outfile << z.rPart << "+" << z.iPart << "i";
    return outfile;
}

// MARK: - Addition

Complex Complex::operator+(const Complex& operand) const {
    float realSum = rPart + operand.rPart;
    float imaginarySum = iPart + operand.iPart;
    return Complex(realSum, imaginarySum);
};

Complex Complex::operator+(float operand) const {
    float realSum = rPart + operand;
    return Complex(realSum, iPart);
};

// MARK: - Subtraction

Complex Complex::operator-(const Complex& operand) const {
    float realDifference = rPart - operand.rPart;
    float imaginaryDifference = iPart - operand.iPart;
    return Complex(realDifference, imaginaryDifference);
};

Complex Complex::operator-(float operand) const {
    float realDifference = rPart - operand;
    return Complex(realDifference, iPart);
};

Complex Complex::operator-() const {
    float ac = rPart * (-1.0);
    float bd = iPart * 0.0;
    float acMinusBd = ac - bd;
    
    float ad = rPart * 0.0;
    float bc = iPart * (-1.0);
    float adPlusBc = ad + bc;
    
    return Complex(acMinusBd, adPlusBc);
};

// MARK: - Multiplication

Complex Complex::operator*(const Complex& operand) const {
    float ac = rPart * operand.rPart;
    float bd = iPart * operand.iPart;
    float realImaginaryDifference = ac - bd;
    
    float ad = rPart * operand.iPart;
    float bc = iPart * operand.rPart;
    float realImaginarySum = ad + bc;
    
    return Complex(realImaginaryDifference, realImaginarySum);
};

Complex Complex::operator*(float operand) const {
    float realProduct = rPart * operand;
    float imaginaryProduct = iPart * operand;
    return Complex(realProduct, imaginaryProduct);
};

// MARK: - Division

Complex Complex::operator/(float operand) const {
    return Complex((rPart/operand), (iPart/operand));
};

Complex Complex::operator/(const Complex& operand) const {
    float ac = rPart * operand.rPart;
    float bd = iPart * operand.iPart;
    float acbdSum = ac + bd;
    
    float bc = iPart * operand.rPart;
    float ad = rPart * operand.iPart;
    float bcadDifference = bc - ad;
    
    Complex numerator = Complex(acbdSum, bcadDifference);
    
    float denominator = ((operand.rPart * operand.rPart) + (operand.iPart * operand.iPart));
    
    return numerator/denominator;
};

// MARK: - Equality

bool Complex::operator==(const Complex& operand) const {
    return rPart == operand.rPart && iPart == operand.iPart;
};
