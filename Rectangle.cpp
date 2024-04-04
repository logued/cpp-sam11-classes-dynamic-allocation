//   Rectangle class Implementation.  Rectangle.cpp     Mar 2024
/**
 * Demonstrates:
 * Implementation of Rectangle class in this file
 * is separate from the definition of the class in Rectangle.h.
 * Constructors and functions are implemented here, and
 * are associated with the Rectangle class using
 * the Scope Resolution Operator "::"
 * "Rectangle.h" must be #included at the top of this file so that
 * the preprocessor can copy it into this file.
 * */

// Preprocessor directives to prevent the file Rectangle.h being included in the
//  program more than once. Note the closing #endif at the bottom of the file.
//

#include "Rectangle.h"      // copies in the Rectangle.h class definition

// IMPLEMENTATION of constructors of the Rectangle class

Rectangle::Rectangle() {     // default no-arg constructor, qualifier "::"
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int width, int height) {
    this->width = width;        // the "this" pointer is a pointer to 'this' Rectangle object
    this->height = height;
}

// IMPLEMENTATION of member functions of Rectangle class

int Rectangle::area() const
{
    return width * height;
}

int Rectangle::getWidth() const
{ return width; }

int Rectangle::getHeight() const
{ return height; }

