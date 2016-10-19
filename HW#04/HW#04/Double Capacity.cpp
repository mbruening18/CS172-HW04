//
//  Double Capacity.cpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Double Capacity.hpp"

using namespace std;

//EX04_02 – Liang Programming Exercise 11.3: Increase array size

int* doubleCapacity (const int* list, int SIZE)
{
    int newsize = SIZE *2;
    
    int *p = new int[newsize];
    
    for (int i = 0; i < SIZE; i++)
    {
        p[i] = list[i];
    }
    delete[] list;
    return p;
}
