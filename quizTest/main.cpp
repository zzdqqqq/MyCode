//
//  main.cpp
//  quizTest
//
//  Created by Zidong Zhang on 1/31/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, const char * argv[]) {
    std::cout << sizeof(uint32_t) << std::endl;
    uint32_t i = 4294967296;
    std::cout << i << std::endl;
    double p = pow(2,32);
    std::cout << std::setprecision(10) << p << std::endl;
    return 0;
}
