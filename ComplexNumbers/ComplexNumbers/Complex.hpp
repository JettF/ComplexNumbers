//
//  Complex.hpp
//  ComplexNumbers
//
//  Created by Jett Farmer on 1/21/17.
//  Copyright © 2017 Jett Farmer. All rights reserved.
//

#ifndef Complex_hpp
#define Complex_hpp

#include <stdio.h>
#include <iostream>
using namespace std;


class Complex {
    
    friend Complex operator+(float,const Complex&);
    friend Complex  operator-(float,const Complex&);
    friend Complex  operator*(float,const Complex&);
    friend Complex  operator/(float,const Complex&);
    friend ostream & operator<<(ostream& outfile,const Complex&);

public:
    static const Complex i;
    Complex(): rPart(1.0), iPart(1.0) {};
    Complex(float real, float imaginary): rPart(real), iPart(imaginary) {};
    const Complex & operator=(const Complex&);
    const Complex & operator=(float);
    bool   operator==(const Complex&) const;
    Complex operator+(const Complex&) const;
    Complex operator+(float) const;
    Complex operator-(const Complex&) const;
    Complex operator-(float) const;
    Complex operator-() const;
    Complex operator*(const Complex&) const;
    Complex operator*(float) const;
    Complex operator/(const Complex& ) const;
    Complex operator/(float) const;

private:
    float iPart;
    float rPart;
};

#endif /* Complex_hpp */
