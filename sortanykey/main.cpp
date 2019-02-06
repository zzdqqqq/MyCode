//
//  main.cpp
//  sortanykey
//
//  Created by Zidong Zhang on 2/1/19.
//  Copyright © 2019 Zidong Zhang. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string fisrtname;
    string lastname;
    int age;
    Person(const string& firstname, const string& lastname, int age) :
    firstname(firstname), lastname(lastname), age(age){}
};
template<typename T>
void sort(T x[], int n) {
    for (int i = 0; i < n-1; i++){
        for(int j = 0; j < i-1; j++)
            if (x[j] > x[j+1]){
                T temp = x[j];
                x[j] = x[j+1];
                x[j+1] = temp;
            } 
    }
}

int main(){
    int x[] = { 5, 4, 3, 2, 1};
    float y[] = [2.5,1.5, 3];
    string z[] = {"Fred", "banana", "apple"};
    Person people[] = {Person("Dov", "Kruger", 20),
        Person("Yu-Dong", "Yao", 25),
        Person("Min", "Song", 30)
    };
    sort(x, 5);
    sort(y, 3);
    sort(z, 3);
    sort(people)
}
