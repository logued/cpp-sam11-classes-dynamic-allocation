#pragma once
/**  Rectangle class definition.    Rectangle.h
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

class Rectangle
{
private:                    // access specifier "private"
    int width, height;      // member data
public:
    Rectangle();            // no-argument constructor
    Rectangle(int, int);    // constructor

    int area(void);         // function definitions (no implementation)
    int getWidth(void);
    int getHeight(void);
};
