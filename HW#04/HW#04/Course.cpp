//
//  Course.cpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//


//EX04_05 – Liang Programming Exercise 11.13: the Course class


#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <ctime>
#include "Course.hpp"

using namespace std;



Course:: Course (const string& courseName, int capacity)
{
    numberOfStudents = 0;
    this-> courseName = courseName;
    this-> capacity = capacity;
    students = new string[capacity];
}

Course::~Course()
{
    delete [] students;
}

string Course::getCourseName() const
{
    return courseName;
}

//adds student to the course
void Course:: addStudent(const string& name)
{
    //if not at capacity adds student to course
    if(numberOfStudents != capacity)
    {
        students[numberOfStudents] = name;
        numberOfStudents++;
    }
    
    //checks if there is capacity, if not then doubles capacity
    if(numberOfStudents == capacity)
    {
        string *newList = new string[2*capacity];
        for(int i=0; i < 2*capacity; i++)
        {
            newList[i] = students[i];
        }
        capacity=2*capacity;
        
        delete []students;
        students=newList;
        
    }
}

//drops student from the course
void Course:: dropStudent(const string& name)
{
    for (int i = 0; i < numberOfStudents; i++)
    {
        if (students[i] == name)
        {
            //checks to see if students is the couse
            for(int j = i+1; j < numberOfStudents; j++)
            {
                students[j-1] = students[j];
            }
            students[numberOfStudents-1] = "";
            //drops student
            numberOfStudents--;
        }
    }
}

//gets the students
string* Course::getStudents() const
{
    return students;
}

//calls number of students
int Course::getNumberOfStudents() const
{
    return numberOfStudents;
}

//clears number of students
int Course:: Clear()
{
    numberOfStudents = 0;
    return 0;
}









