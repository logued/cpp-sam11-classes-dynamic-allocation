/**  Rectangle class definition.    Rectangle.h     Mar 2024
 *
 * HEADER File
 * This C++ Header file is the Class Definition file for the Rectangle class.
 * In this file, we define the name of the class, the data members (fields),
 * the member functions, and the constructors and destructors.
 * Note that the implementation of member functions is normally NOT placed
 * in the class definitions.  Instead, the implementation of member functions is placed
 * in a corresponding ".cpp" file (Rectangle.cpp in this case)
 *
 * Demonstrates:
 * - defining a class structure
 * - access specifiers [  private: and public: ]
 * - defining member data
 * - defining constructors, constructor overloading
 * - member function definitions (with no implementation)
 */

#ifndef CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
#define CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
//https://www.jetbrains.com/help/clion/header-guards.html

class Rectangle
{
private:            // access specifier "private"
    int width;      // member data
    int height;
public:
    Rectangle();            // no-argument constructor
    Rectangle(int, int);    // constructor

    int area() const;         // function definitions (no implementation)
    int getWidth() const;
    int getHeight() const;
};

#endif