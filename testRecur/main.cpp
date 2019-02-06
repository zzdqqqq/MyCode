//
//  main.cpp
//  testRecur
//
//  Created by Zidong Zhang on 1/25/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int getFib(int index);

int main()
{
    cout << getFib(10) << endl;
    return 0;
}

int getFib(int index)// O(2^n)
{
    if (index < 2) {
        return index;
    }
//    if (fibo[n] != 0)
    else{
        return getFib(index - 1) + getFib(index - 2);
    }
    
}
