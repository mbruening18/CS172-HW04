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
    
    
    //declares the size of the array
    int size =0;
    cout<< "Enter the size of the array: ";
    //lets user imput size of array
    cin >> size;
    

    double* array= new double[size];
    double sum=0;
    
    //has user enter all numbers in the array
    for (int i=0; i < size; i++)
    {
        cout << "Enter numbers for the array: ";
        cin >> array[i];
        sum += array[i];
        
    }
    //calculates the average
    double average = sum/ size;
    
    //finds how many numbers are above the average
    int count =0;
    for (int i=0; i <size; i++)
    {
        if (array[i] > average)
           count++;
    }

    //cout the average and elements above average
    cout<< "The average is " << average << endl;
    cout<< "Number of elements above the average is: " << count <<endl;
    delete [] array;
    
    cout<< " " << endl;
    
    
    //EX04_02 – Liang Programming Exercise 11.3: Increase array size //
    
    
    //has user enter the size of the array
    cout << "Enter the size of the array: ";
    int SIZE;
    cin >> SIZE;
    //doubles the array that the user typed in
    int* list = new int[SIZE];
    int doubleSize = SIZE * 2;
    //calls function
    list = doubleCapacity(list,SIZE);
    //couts the double capacity
    cout << "The double capacity is: " << doubleSize << endl;
    //delets the list
    delete [] list;
    
    cout<< " " << endl;
    
    
    //EX04_03 – Liang Programming Exercise 11.5: Find the smallest element
    
    
    //hard wires the numbers for the array
    int Array []= {1,2,4,5,10,100,2,-22};
    //calls the fiunction
    int smallest = smallestElement(Array,8);
    //finds the smallest element in array
    cout << "The smallest element is " <<smallest << endl;
    
    cout<< " " << endl;
    
    
    //EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class
    
    
    //the points of the rectangle for each one
    Rectangle2D r1 (2,2,5.5,4.9);
    Rectangle2D r2 (4,5, 10.5, 3.2);
    Rectangle2D r3 (3,5,2.3,5.4);
    
    //find the area of the first, couts it, calls function
    cout << "The area of the 1st rectangle is " << r1.getArea() << endl;
    //finds the perimeter, couts it, calls function
    cout << "The perimeter of the 1st rectangle is " << r1.getPerimeter() << endl;
    
    //asks if the point 3,3 is in the 1st tringle, if not out puts its not
    if(r1.contains(3, 3) == true)
     {
        cout << "The point (3, 3) is in the 1st rectangle"<<endl;
     }
    else
     {
        cout << "The point (3, 3) is not in the 1st rectangle"<<endl;
    }
    
    //asks if rectangle one contains r2
    if(r1.contains(r2) == true)
     {
        cout << "1st rectangle contains the 2nd rectangle"<<endl;
         
     }
    else
     {
        cout << "1st rectangle doesn't contains the 2nd rectangle"<<endl;
     }
    
    //asks if r1 overplaps with r3
    if(r1.overlaps(r3) == true)
     {
        cout << "3rd rectangle overlaps with the 1st rectangle"<<endl;
     }
    else
     {
        cout << "3rd rectangle doesn't overlap with the 1st rectangle"<<endl;
     }
    
    cout<< " " << endl;

    
    //EX04_05 – Liang Programming Exercise 11.13: the Course class
    
    
    //declares course and capacity
    Course c1("CS172", 5);
    
    //adds students
    c1.addStudent("Peter");
    c1.addStudent("Brian");
    c1.addStudent("Anne");
    
    //couts number of students in course
    cout<< "Number of students in course 1: " << c1.getNumberOfStudents()<<endl;
    string *students =c1.getStudents();
    
    //couts names of students in the course
    for(int i=0; i < c1.getNumberOfStudents(); i++)
    {
        cout << students[i] << " ";
    }
    
    //drops student
    c1.dropStudent("Peter");
    
    cout<< " " << endl;
    
    // //couts number of students in course
    cout<< "Number of students in course 1: " << c1.getNumberOfStudents()<<endl;
    students =c1.getStudents();
    
    //couts names of students in the course
    for(int i=0; i < c1.getNumberOfStudents(); i++)
    {
        cout << students[i] << " ";
    }
    
    cout<< " " << endl;
    
    return 0;
    
    
    
}
