//
//  main.cpp
//  ComplexNumbers
//
//  Created by Jett Farmer on 1/21/17.
//  Copyright © 2017 Jett Farmer. All rights reserved.
//

#include <iostream>
#include "Complex.hpp"
int main(int argc, const char * argv[]) {

    Complex x = Complex(3, 2);
    
    Complex firstTerm = (x * x * x * x);
    Complex secondTerm = (x * x * x) * 7;
    Complex thirdTerm = (x * x) * 4;
    Complex fourthTerm = x * 9;

    Complex polynomial = (firstTerm + secondTerm - thirdTerm - fourthTerm - 1.0)/2.0;

    std::cout << polynomial << endl;

    return 0;
}
