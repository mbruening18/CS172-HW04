//
//  Course.hpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp


using namespace std;
#include <stdio.h>

//EX04_05 – Liang Programming Exercise 11.13: the Course class

//declares course
class Course
{
    //sets to private
private:
    int capacity;
    string courseName;
    string* students;
    int numberOfStudents;
    
    //sets to public
public:
    Course (const string& courseName, int capacity);
    ~Course();
    string getCourseName() const; 
    void addStudent(const string& name); //add students
    void dropStudent(const string& name); //removes students
    string* getStudents() const;
    int getNumberOfStudents() const;
    int Clear(); //gets rid of students

};



#endif /* Course_hpp */
