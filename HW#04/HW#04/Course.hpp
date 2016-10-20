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

class Course
{
private:
    int capacity;
    string courseName;
    string* students;
    int numberOfStudents;
    
public:
    Course (const string& courseName, int capacity);
    ~Course();
    string getCourseName() const;
    void addStudent(const string& name);
    void dropStudent(const string& name);
    string* getStudents() const;
    int getNumberOfStudents() const;
    int Clear();

};



#endif /* Course_hpp */
