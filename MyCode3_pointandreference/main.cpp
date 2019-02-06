//
//  main.cpp
//  MyCode3_pointandreference
//
//  Created by Zidong Zhang on 1/12/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    cout << "Value: " << i << endl << "Address: " << &(i) << endl \
    << "Value: " << *(&(i)) << endl;
}
