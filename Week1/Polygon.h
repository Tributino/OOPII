/**
 * ******* Lasalle College Vancouver *******.
 * 
 * Object Oriented Programming in C++ II
 * Week 1 - Foundation Review
 * @author
 * Ivaldo Tributino de Sousa <ISousa@lasallecollegevancouver.com>
 */

// All header (.h) files start with "#pragma once":
#pragma once

#include "Shape.h"

class Polygon : public Shape2D {

  private: // Private members:

    // Data Members (underscore indicates a private member variable)
    double length_;           
    unsigned int numberSides_;

  public:  // Public members:
    /**
      * Creates a triangle with one side measuring 1.
      */
    Polygon(); // Custom default constructor

    /**
      * Create a polygon using the following parameters:
      * @param numberSides.
      * @param length.
      */
    Polygon(double length, unsigned int numberSides); // Custom Constructor

    /**
      * Copy constructor: creates a new Polygon from another. 
      * @param obj polygon to be copied.
      */
    Polygon(const Polygon & obj); // Custom Copy constructor

    /**
      * Assignment operator for setting two Polygon equal to one another.
      * @param obj Polygon to copy into the current Polygon.
      * @return The current image for assignment chaining.
      */
    Polygon & operator=(const Polygon & obj);  // Custom assignment operator;

    /**
      * Destructor: frees all memory associated with a given Polygon object.
      * Invoked by the system.
      */
    virtual ~Polygon(); // Destructor

     /**
      * Override Functions
      */
    string shapeName();

    double area();

    
    /**
      * Gets and sets
      */

    void setlength(double length);

    void setNumberSides(unsigned int numberSides) ;

    double getlength() const;

    unsigned int getNumberSides() const;
  
};
