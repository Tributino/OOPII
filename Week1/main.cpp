/**
 * ******* Lasalle College Vancouver *******.
 * 
 * Object Oriented Programming in C++ II
 * Week 1 - Foundation Review
 * @author
 * Ivaldo Tributino de Sousa <ISousa@lasallecollegevancouver.com>
 */

#include "Polygon.h"

void test1(Polygon b);
Polygon test2();
void test3(Polygon& b);
void test4(Polygon* b);
void test5(Polygon& b, double length);

int main() {

  //************************************************
  //       -------- Encapsulation --------
  //************************************************
  cout << "-------- Encapsulation --------" << endl;

  {
  Polygon poly;
  cout << poly.area() << endl;
  // cout << poly.length_ << endl;
  }


  //************************************************
  //       -------- Inheritance --------
  //************************************************
  cout << "-------- Inheritance --------" << endl;
  {
  Shape2D shap2d;
  Polygon square(2,4);

  Shape2D* shap2dPtr = &square;

  cout << shap2d.shapeName() << endl;
  cout << shap2dPtr->shapeName() << endl;
  }
  
  //************************************************
  //       -------- Constructor --------
  //************************************************
  cout << "-------- Constructor --------" << endl;

  {
    Polygon poly1;
    cout << poly1.getNumberSides() << endl;
  }

  {
    Polygon poly2(2,5);
    cout << poly2.getNumberSides() << endl;
  }


  //*************************************************************
  //    --- Copy Constructor & Copy assignment Operator ---
  //*************************************************************
  cout << "--- Copy Constructor & Copy assignment Operator ---" << endl;

  {
    Polygon poly1;
    Polygon poly2(2,5);
    test1(poly2);
    Polygon poly3 = test2();
    poly1 = poly3;
  }

  //************************************************
  //       -------- Class Destructor --------
  //************************************************
  cout << "-------- Class Destructor --------" << endl;

  {
    Polygon poly(10,11);
    cout << poly.area() << endl;
  }

  {
    Polygon* p1 = new Polygon();
    Polygon* p2 = new Polygon(3,6);
    cout << p1->shapeName() << endl;
    cout << p2->shapeName() << endl;

    delete p1;
  }
    
  //************************************************
  //       -------- Variable storage --------
  //************************************************
  cout << "-------- Variable storage --------" << endl;

  {
    Polygon poly(5,5);
    test1(poly);
    test3(poly);
    test4(&poly);
  } 

  //************************************************
  //       -------- Now it's your turn --------
  //************************************************
  cout << "-------- Now it's your turn --------" << endl; 

    {
    Polygon poly(5,5);
    test5(poly, 10);
    cout << poly.getlength() << endl;
    }


  return 0;
}

void test1(Polygon b){}

Polygon test2(){
  Polygon square(2,4);
  return square;
}

void test3(Polygon& b){}

void test4(Polygon* b){}

void test5(Polygon& b, double length){
  if (length > 0.0){
    b.setlength(length);
  }
}