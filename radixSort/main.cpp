//
//  main.cpp
//  radixSort
//
//  Created by Zidong Zhang on 2/1/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 1000000;
    int x[n];   // only 10 numbers 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    //
    int hist[10] = [0];
    
    for (int i = 0; i < n; i++){
        hist[x[i]]++;
    }
    int count = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < hist[i]; j++)
            x[count++] = i;
    }
// n = 10^9 100k different numbers 5 8 50 1000 9999 
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}

