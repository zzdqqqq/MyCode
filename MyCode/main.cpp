//
//  main.cpp
//  MyCode
//
//  Created by Zidong Zhang on 1/10/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

// vector assign
#include <iostream>
#include <vector>

int main ()
{
    std::vector<int> first;
    std::vector<int> second;
    std::vector<int> third;
    
    first.assign (7,3);             // 7 ints with a value of 100
    
    std::vector<int>::iterator it;
    it=first.begin()+1;
    std::cout << *(first.begin()) << std::endl;
    
    second.assign (it,first.end()-1); // the 5 central values of first
    
    int myints[] = {1776,7,4};
    third.assign (myints,myints+3);   // assigning from array.
    
    std::cout << "Size of first: " << int (first.size()) << '\n';
    std::cout << "Size of second: " << int (second.size()) << '\n';
    std::cout << "Size of third: " << int (third.size()) << '\n';
    return 0;
}
