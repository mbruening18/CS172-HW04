//
//  Smallest element.cpp
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
#include "Smallest element.hpp"
using namespace std;

//EX04_03 – Liang Programming Exercise 11.5: Find the smallest element

// finds the smallest element
int smallestElement (int* Array,int size)
{
    int smallest = Array[0] ;
    for ( int i=1; i < size; ++i)
        {
            if ( Array[i] < smallest )
            {
                smallest = Array[i] ;
            }
            
        }
   //returns the smallest in the array after checking
    return smallest;
    
}

