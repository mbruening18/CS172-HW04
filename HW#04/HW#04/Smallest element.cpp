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

int* smallestElement ()
{
    int Array []= {1,2,4,5,10,100,2,-22};
    
    int smallest = Array[0] ;
    for ( int i=1;i < sizeof(Array)/sizeof(Array[0]);++i )
        {
            if ( Array[i] < smallest )
            {
                smallest = Array[i] ;
            }
            
        }
    
    cout << smallest<< '\n';
    return 0;
    
}

