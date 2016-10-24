//
//  Rectangle2D.hpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//

#ifndef Rectangle2D_hpp
#define Rectangle2D_hpp

#include <stdio.h>


//EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class

//declares class
class Rectangle2D
{
    //mkes it private
private:
    double x;
    double y;

    double width;
    double height;
   
    //makes it public
public:
    
    int getx()const; //gets
    int gety()const; //gets

    void setx(int x); //sets
    void sety(int y); //sets
   
    double getwidth()const;  //gets
    double getheight()const; //gets
   
    void setwidth(double width); //sets
    void setheight(double height); //sets
    
    Rectangle2D(); //no arg-constuctor
    Rectangle2D(int x, int y, int width, int height); //arg-constuctor
  
    int getArea()const; //gets
    int getPerimeter()const; //gets
    
    bool contains(double x, double y)const; //checks
    bool contains(const Rectangle2D &r)const; //checks
    bool overlaps(const Rectangle2D &r)const; //checks

};
 

#endif /* Rectangle2D_hpp */
