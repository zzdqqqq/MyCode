//
//  main.cpp
//  findNumber
//
//  Created by Zidong Zhang on 1/23/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string findNumber(int array[], int k);

int main()
{
    int array[3] = {1,2,3};
    cout << findNumber(array, 1) << endl;
}


string findNumber(int array[], int k)
{
    int maxCounter = sizeof(*array);
    cout << array << endl;
    for(int counter = 0; counter < maxCounter; counter++)
    {
        if (k == array[counter])
            return "yes";
    }
    return "No";
    
}
