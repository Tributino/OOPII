/**
 * ******* Lasalle College Vancouver *******.
 * 
 * Object Oriented Programming in C++ II
 * Week 1 - Foundation Review
 * @author
 * Ivaldo Tributino de Sousa <ISousa@lasallecollegevancouver.com>
 */

// #include is a way of including a standard or user-defined file in the program


#pragma once
// #include is a way of including a standard or user-defined file in the program
#include "libraries.h"

// Abstract class
class Shape{
public:

  // Pure Virtual Function  
  virtual string shapeName() = 0;

};

class Shape2D : public Shape{

public:
    //Virtual Function
    virtual string shapeName(){ return "Shape2D";}
    //Pure Virtual Function
    virtual double area(){ return 0.0;}
};