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
    Complex five = Complex(5, 1);
    Complex six = Complex(6, 1);
    float seven = 7;
    std::cout << five + seven << endl;
    return 0;
}
