/**
 * ******* Lasalle College Vancouver *******.
 * 
 * Object Oriented Programming in C++ II
 * Week 1 - Foundation Review
 * @author
 * Ivaldo Tributino de Sousa <ISousa@lasallecollegevancouver.com>
 */

// #include is a way of including a standard or user-defined file in the program

#include "Polygon.h"

// #define Allows the programmer to give a name to a constant value before the program is compiled
#define PI 3.14159265


Polygon :: Polygon(){
  length_ = 1;
  numberSides_ = 3;
  std::cout << "Default Constructor Invoked"  << std::endl;
}


Polygon :: Polygon(double length, unsigned int numberSides){
  length_ = (length>0)? length: 1;
  numberSides_ = (numberSides>2)? numberSides : 3;
  std::cout << "Constructor Invoked"  << std::endl;
}

Polygon :: Polygon(const Polygon & obj){
  length_ = obj.length_;
  std::cout << "Copy Constructor Invoked"  << std::endl;
}

Polygon & Polygon :: operator=(const Polygon & obj){

  if(this!= & obj){
    length_ = obj.length_;
    numberSides_ = obj.numberSides_;
  }
  std::cout << "Assignment operator invoked"  << std::endl;
  return *this; // dereferenced pointer
}

Polygon::~Polygon() {
    std::cout << "Polygon destroyed" << std::endl;
}

double Polygon :: area(){
  double perimeter = numberSides_*length_;
  double apothem = (length_)/(2*tan(PI/numberSides_));
  return perimeter*apothem/2;
}

string Polygon::shapeName(){

  string arrayName[6] = {"triangle" , "square", "pentagon",
  "hexagon", "heptagon", "octagon"}; 

  string name = (numberSides_<9)? arrayName[numberSides_-3]: to_string(numberSides_)+"_polygon";

  return name;
}

void Polygon::setlength(double length) {
  if (length>0){
    length_ = length;
  }
  else{
    std::cout << "Please, set a value greater than 0" << std::endl;
  };
}

void Polygon :: setNumberSides(unsigned int numberSides) {

  if (numberSides>2){
    numberSides_ = numberSides;
  }
  else{
    std::cout << "Please, only set values above 2." << std::endl;
  };
   
}

double Polygon ::getlength() const {
  return length_ ;
}

unsigned int Polygon :: getNumberSides() const {
  return numberSides_;
}

