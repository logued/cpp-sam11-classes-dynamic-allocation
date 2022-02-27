//   Rectangle class Implementation.  Rectangle.cpp     Feb 2022
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
#ifndef CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
#define CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H

#include "Rectangle.h"      // copies in the Rectangle.h class definition

// IMPLEMENTATION of constructors of the Rectangle class

Rectangle::Rectangle() {     // default no-arg constructor, qualifier "::"
    width = 5;
    height = 5;
}

Rectangle::Rectangle(int a, int b) {
    width = a;
    height = b;
}

// IMPLEMENTATION of member functions of Rectangle class

int Rectangle::area(void) {
    return width * height;
}

int Rectangle::getWidth(void) { return width; }

int Rectangle::getHeight(void) { return height; }


#endif //CPP_SAM10_CLASSES1_RECTANGLE_RECTANGLE_H
