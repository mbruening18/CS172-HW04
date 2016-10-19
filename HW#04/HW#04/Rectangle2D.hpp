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

class Rectangle2D
{
public:
    static double x;
    static double y;

    static int getx;
    static int gety;
    
    static int setx;
    static int sety;
    
    static double width;
    static double height;
    
    static double getwidth;
    static double getheight;
    
    Rectangle2D();
    
    int getArea()const;
    int getPerimeter()const;
    
    void contains(double x, double y)const;
    void contains(const Rectangle2D &r)const;
    void overlaps(const Rectangle2D &r)const;
    
    
    
    
    
    

    
    
};

#endif /* Rectangle2D_hpp */
