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

void Course:: addStudent(const string& name)
{
    students[numberOfStudents] =name;
    numberOfStudents++;
}
             
void Course:: dropStudent(const string& name)
{
    //left as an exercise
}

string* Course::getStudents() const
{
    return students;
}

int Course::getNumberOfStudents() const
{
    return getNumberOfStudents();
}
int Course:: Clear()
{
    delete students;
}









