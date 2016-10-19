//
//  main.cpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//
//EX04_01 – Liang Programming Exercise 11.1: Analyze Input
//EX04_02 – Liang Programming Exercise 11.3: Increase array size
//EX04_03 – Liang Programming Exercise 11.5: Find the smallest element
//EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class
//EX04_05 – Liang Programming Exercise 11.13: the Course class

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>

#include "Double Capacity.hpp"
#include "Smallest element.hpp"
#include "Rectangle2D.hpp"
#include "Course.hpp"


using namespace std;

int main()
{
    
    //EX04_01 – Liang Programming Exercise 11.1: Analyze Input
    int size =0;
    cout<< "Enter the size of the array: ";
    cin >> size;
    

    double array[size];
    double sum=0;
    
    for (int i=0; i < size; i++)
    {
        cout << "Enter a number " << i+1 << endl;
        cin >> array[i];
        sum += array[i];
        
    }
    
    double average = sum/ size;
    
    int count =0;
    for (int i=0; i <size; i++)
    {
        if (array[i] > average)
        {
           count++;
        }
    }

    
    cout<< "The average is " << average << endl;
    cout<< "Number of elements above the average " << count <<endl;
    
    cout<< " " << endl;
    
    //EX04_02 – Liang Programming Exercise 11.3: Increase array size
    
    cout << "Enter the size of the array: ";
    int SIZE;
    cin >> SIZE;
    int *list = new int[SIZE];
    int doubleSize = SIZE * 2;
    doubleCapacity(list, doubleSize);
    cout << "The double capacity is: " << doubleSize << endl;
    
    cout<< " " << endl;
    
    //EX04_03 – Liang Programming Exercise 11.5: Find the smallest element
    
    //int* smallestElement();
    //cout << smallestElement() << endl;
    
    
    //EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class
    
    Rectangle2D r1,r2,r3;
    
    r1 (2,2,5.5,4.9);
    r2 (4,5, 10.5, 3.2);
    r3 (3,5,2.3,5.4)
    
    r1.getArea();
    r1.getPerimeter();
    
    r1.contains(3,3);
    r1.overlaps(r3);
    
    
    
    
    
    //EX04_05 – Liang Programming Exercise 11.13: the Course class
    
    
    
    return 0;
    
}
