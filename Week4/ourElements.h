/**
 * ******* Lasalle College Vancouver *******.
 * 
 * Object Oriented Programming in C++ II
 * Week 4 
 * @author
 * Ivaldo Tributino de Sousa <ISousa@lasallecollegevancouver.com>
 */

#include "libraries.h"

// #define Allows the programmer to give a name to a constant value before the program is compiled
#define PI 3.14159265

// Alias-declaration - In C++11
using BinaryPredicate = bool(*)(int, int); // or  = std::function<bool(int, int)>;

struct absValue
{
	double operator()(double f) {
		return f > 0 ? f : -f;
	}
};

class PrintName {
public:
	void operator()(const Polygon & elem){
		cout << elem.shapeName() << " ";
	}
};

int add3(int number){
  return 3 + number;
}

template<typename T>
void SelectionSort(int *array, int size, T bp)
{
    // Step through each element of the array
    for (int startIndex = 0 ; startIndex < (size - 1); ++startIndex)
    {
        // smallestIndex is the index of the smallest element we've encountered so far.
        int smallestIndex = startIndex;

        // Look for smallest element remaining in the array (starting at startIndex+1)
        for (int currentIndex(startIndex + 1 ); currentIndex < size; ++currentIndex)
        {
            // If the current element is smaller than our previously found smallest
            if (bp(array[smallestIndex], array[currentIndex])) // COMPARISON DONE HERE
            {
                // This is the new smallest number for this iteration
                smallestIndex = currentIndex;
            }
        }

        // Swap our start element with our smallest element
        std::swap(array[startIndex], array[smallestIndex]);
    }
}
// Z_5, the cyclic group of order 5
bool ascendingZ5(int x, int y) 
{
    return x%5 > y%5; 
}

bool descendingZ5(int x, int y)
{
    return x%5 < y%5; 
}

struct RingAscendin
{
    int quotient;
    RingAscendin(int q) : quotient(q){}

    bool operator()(int x, int y){
        return (x%quotient) > (y%quotient);
    }
};

struct Area
{ 
    double area_;
    Area(double area) : area_(area){}

    void operator () (Polygon p) const {
        std::cout << 2*sqrt((area_*tan(PI/p.getNumberSides()))/p.getNumberSides()) << std::endl;
    }
  
};

template <class T>
int doMath (int x, int y, T math)
{
    return math( x, y );
};

class VirtualOperation
{
public: 
    virtual int operation (int x, int y) = 0;
};

class Multiplication : public VirtualOperation
{ 
public:
    int operation (int x, int y){
        return x*y;
    }
};

class addition : public VirtualOperation
{
public:
    int operation (int x, int y){
        return x+y;
    }
};

int doMathVirtual (int x, int y, VirtualOperation* oper)
{
    return oper->operation(x,y);
};

class FunctorOperation
{
public:
    char operation;
    FunctorOperation(char op) : operation(op){};

    int operator()(int x, int y){
        int n = 0;
        switch(operation) {
            case '*' :
                n = x*y; 
                break;
            case '+' :
                n = x+y;
                break;
            default :
                cout << "please use only operator  (+, *)" << endl;
                break;        
        }
        return n;
    }
};

// For Polygons
template<typename T>
void SelectionSortPoly(vector<Polygon>& v, T bp)
{
    for (int startIndex = 0 ; startIndex < v.size(); ++startIndex)
    {
        int smallestIndex = startIndex;

        for (int currentIndex(startIndex + 1 ); currentIndex < v.size()+1; ++currentIndex)
        {
            if (bp(v[smallestIndex], v[currentIndex])) // COMPARISON DONE HERE
            {
                smallestIndex = currentIndex;
            }
        }
        std::swap(v[startIndex], v[smallestIndex]);
    }
}

bool ascendingPoly(Polygon x, Polygon y)
{
    return x > y; 
}

bool descendingPoly(Polygon x, Polygon y)
{
    return x < y; 
}

