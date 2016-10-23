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
//#include "Rectangle2D.hpp"
#include "Course.hpp"


using namespace std;

int main()
{
    
    //EX04_01 – Liang Programming Exercise 11.1: Analyze Input
    int size =0;
    cout<< "Enter the size of the array: ";
    cin >> size;
    

    double* array= new double[size];
    double sum=0;
    
    for (int i=0; i < size; i++)
    {
        cout << "Enter numbers for the array: ";
        cin >> array[i];
        sum += array[i];
        
    }
    
    double average = sum/ size;
    
    int count =0;
    for (int i=0; i <size; i++)
    {
        if (array[i] > average)
           count++;
    }

    
    cout<< "The average is " << average << endl;
    cout<< "Number of elements above the average is: " << count <<endl;
    delete [] array;
    
    cout<< " " << endl;
    
    //EX04_02 – Liang Programming Exercise 11.3: Increase array size
    
    cout << "Enter the size of the array: ";
    int SIZE;
    cin >> SIZE;
    int* list = new int[SIZE];
    int doubleSize = SIZE * 2;
    list = doubleCapacity(list,SIZE);
    cout << "The double capacity is: " << doubleSize << endl;
    delete [] list;
    
    cout<< " " << endl;
    
    //EX04_03 – Liang Programming Exercise 11.5: Find the smallest element
    
    
    int Array []= {1,2,4,5,10,100,2,-22};
    int smallest = smallestElement(Array,8);
    cout << "The smallest element is " <<smallest << endl;
    
    cout<< " " << endl;
    
    //EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class
    
     /*
     Rectangle2D r1,r2,r3;
    
    
  
     //r1 (2,2,5.5,4.9);
     //r2 (4,5, 10.5, 3.2);
     //r3 (3,5,2.3,5.4)
    
    
    cout << "The area of the first rectangle is " << r1.getArea() << endl;
    cout << "The perimeter of the first rectangle is " << r1.getPerimeter() << endl;
    
    if(r1.contains(3, 3) == true)
     {
        cout << "The point (3, 3) is in the first rectangle";
     }
    else
     {
        cout << "The point (3, 3) is not in the first rectangle";
    }
     
    if(r1.contains(r2) == true)
     {
        cout << "The 1st rectangle contains the 2nd rectangle";
     }
    else
     {
        cout << "The 1st rectangle doesn't contains the 2nd rectangle";
     }
    
    if(r1.overlaps(r3) == true)
     {
        cout << "The 3rd rectangle overlaps with the first rectangle";
     }
    else
     {
        cout << "The 3rd rectangle doesn't overlap with the first rectangle";
     }
    
    

    
    
    */
    
  
    
    //EX04_05 – Liang Programming Exercise 11.13: the Course class
    
    Course c1("CS172", 5);
    
    c1.addStudent("Peter");
    c1.addStudent("Brian");
    c1.addStudent("Anne");
    
    
    cout<< "Number of students in course 1: " << c1.getNumberOfStudents()<<endl;
    string *students =c1.getStudents();
    
    for(int i=0; i < c1.getNumberOfStudents(); i++)
    {
        cout << students[i] << ", ";
    }
    
    c1.dropStudent("Peter");
    

    
    return 0;
    
    
    
}
