//
//  main.cpp
//  shuffle
//
//  Created by Zidong Zhang on 2/1/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 shuffling is the opposite of sorting
 
 how many ways are there to order n elements ? n!
 n = 10^6    n!
 
 entropy
 we expect it its easier to shuffle that sort
 
 x = rand();
 y = rand();
 [x,y] are correlated ??? BAD random numbers
 */

#include <random>
#include <iostream>
void badshuffle(int x[], int n){ // n(o^2)
    int y[n];
    for (int i = n-1; i >= 0; i--){
        do
            r = random(0, i);
        while (x[r] == 0);
        
        y[i] = x[r];
        x[r] = 0;
    }
}

void unfairShuffle(int x[], int n){
    for (int i = 0; i < n; i++){
        int r = random(0, n-1);
        swap(x[i], x[r]);
    }
}

void FischerYates(int x[], int n){ // O(n)
    for (int i = n-1; i > 0; i--){
        int r = random(0,i);
        swap(x[i], x[r]);
    }
}
