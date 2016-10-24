//
//  Rectangle2D.cpp
//  HW#04
//
//  Created by Megan Bruening on 10/19/16.
//  Copyright © 2016 Megan Bruening. All rights reserved.
//


//EX04_04 – Liang Programming Exercise 11.9: Geometry: The Rectangle2D class

#include "Rectangle2D.hpp"

//no arg-constructor
Rectangle2D::Rectangle2D()
{
    //declares set variables
    x = 0;
    y = 0;
    width = 1;
    height = 1;
}

//argument constructor
Rectangle2D:: Rectangle2D(int x, int y, int width, int height)
{
    //uses pointers
    this->x=x;
    this->y=y;
    this->width=width;
    this->height=height;
}

int Rectangle2D::getx() const
{
    //gets the x value
    return x;
}

int Rectangle2D::gety()const
{
    //gets the y value
    return y;
}

void Rectangle2D::setx(int x)
{
    //sets the x value to pointer
    this->x=x;
}

void Rectangle2D::sety(int y)
{
    //sets the y value to pointer
    this->y= y;
}

double Rectangle2D::getwidth()const
{
    //gets the width
    return width;
}

double Rectangle2D::getheight()const
{
    //gets the height
    return height;
}

void Rectangle2D::setwidth(double width)
{
    //sets the width
    this->width=width;
}

void Rectangle2D::setheight(double height)
{
    //sets the height
    this->height= height;
}

int Rectangle2D::getArea()const
{
    //gets the area with formula
    return width*height;
}

int Rectangle2D::getPerimeter()const
{
    //gets the perimeter with formula
    return width*2 + height*2;
}

bool Rectangle2D::contains(double x, double y)const
{
    //finds the four corners
    return x >= this->x && x <= this->x + this->width && y >= this->y && y <= this->y + this->height;
}

bool Rectangle2D::contains(const Rectangle2D &r)const
{
    //checks if the rectangle contains the point or rectangle
    return contains(r.getx(), r.gety()) &&
           contains(r.getx() + r.getwidth(), r.gety()) &&
           contains(r.getx(),r.gety()+ r.getheight()) &&
           contains(r.getx()+r.getwidth(), r.gety()+r.getheight());
    
}

bool Rectangle2D::overlaps(const Rectangle2D &r)const
{
    //checks if the rectangle overlaps the point or rectangle
    return contains(r.getx(), r.gety()) ||
           contains(r.getx() + r.getwidth(), r.gety()) ||
           contains(r.getx(),r.gety()+ r.getheight()) ||
           contains(r.getx()+r.getwidth(), r.gety()+r.getheight()) ||
   
           r.contains(this->getx(), this->gety()) ||
           r.contains(this->getx() + this->getwidth(), this->gety()) ||
           r.contains(this->getx(),this->gety()+ this->getheight()) ||
           r.contains(this->getx()+this->getwidth(), this->gety()+this->getheight());
    
}


