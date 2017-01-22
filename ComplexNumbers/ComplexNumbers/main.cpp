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
    Complex five = Complex(6, 3);
    Complex six = Complex(1, 7);
    
    five = six;
    
    std::cout << five << endl;
    return 0;
}
