//                                  Mar 2024
/**
 * Dynamic allocation of memory to store Class objects.
 * Demonstrates Dynamically Allocating an object using "new".
 * The address of the new object is returned by "new", so we must store it in a pointer.
 * Dynamically allocated objects are placed on the HEAP area of memory.
 * We MUST remember to manually free them from memory when we are finished using them.
 * We use the "->" operator to access the member function of an object using a pointer.
 *
 * Dynamically allocate an array of objects.
 *
 */
#include "Rectangle.h"  // include the class definition
#include <iostream>
#include <memory>

using namespace std;

// function prototypes for  passing by pointer and by reference
void display_using_pointer(Rectangle* );
void display_using_reference(Rectangle &);

int main() {

	Rectangle rect(3, 4);		// creates automatic variable - on Stack

	Rectangle* pRect1;			// declare a (raw) pointer to Rectangle
	pRect1 = &rect;	            // put pointer pRect pointing at rect object

	cout << pRect1->area() << endl;	// access member function using pointer

	// TODO - draw the memory diagram

	// DYNAMICALLY ALLOCATE a single Rectangle class object using 'new'  (on Heap)
	Rectangle* pRect2 = new Rectangle(5, 5);

    cout<< "Dynamically Allocated Rectangle object: area = " << endl;
	cout << pRect2->area() << endl;	// access the member function using the pointer

    // pass the address of the Rectangle object as an argument into function.
    // the function must have declared a pointer parameter to receive the address.
	display_using_pointer(pRect2);

    // In this case the function has declared a parameter that is a reference type, so
    // we must provide an object as an argument.  We do this by dereferencing the pRect2 pointer,
    // which presents the object pointed to by pRect2.
	display_using_reference(*pRect2);

	delete pRect2;		// free up memory when finished with it.
	pRect2 = nullptr;    // set pointer to null to prevent dangling pointer


    // Dynamically allocate a Rectangle object and assign its address to a Smart Pointer

    // https://learn.microsoft.com/en-us/cpp/cpp/smart-pointers-modern-cpp?view=msvc-170#uses-for-smart-pointers


    // Create the object and assign its address to a smart pointer.
    // By doing this, the C++ system will take on the responsibility to free up
    // memory occupied by the dynamically allocated Rectangle object.
    // This is  a "Modern" C++ feature, and helps avoid memory leaks.
    //
    unique_ptr<Rectangle> spRect ( new Rectangle(3,3) );  // smart unique pointer to Rectangle
    cout << spRect->area() << endl;	// access member function using pointer

    // we do not have to delete the Rectangle memory that the smart pointer points to
    // as it will be deleted when the smart pointer object goes out of scope/duration.
    // The smart pointer itself is stored as an object on the stack
    // (which points at the dynamically allocated Rectangle object) and just before it is removed from the stack
    // it will call a destructor to delete the memory allocated for the rectangle.
    // Read the Microsoft Learn reference shown above.
    // We may explore this later in the course.


	// TODO - draw the memory diagram

	// Demo - DYNAMICALLY ALLOCATE and Initialize an array of Class objects - (on Heap)
	// Access elements using the Array notation.

	Rectangle* rectangles = new Rectangle[]{ { 2,5 }, { 4,5 }, { 6,6 } };  // allocate an initialize

    cout << "Array of Rectangles:" << endl;
	cout << rectangles[0].area() << endl;
	cout << rectangles[1].area() << endl;
    cout << rectangles[2].area() << endl;
	//cout << "Danger - Index beyond bounds prints : area() = " << array[5].area() << endl;	// ouch - no run time error !!!!


	delete[] rectangles;
	rectangles = nullptr;

	//TODO - Draw the memory diagram of the above

	// Normally we will use the vector class in C++ to store an array of Class objects
    // as it can grow to accommodate elements as they are added.

	return 0;
}

void display_using_pointer(Rectangle* pRect) {

	cout << pRect->area() << endl;	// pointer uses arrow "->"  member access
}

void display_using_reference(Rectangle& rect) {

	cout << rect.area() << endl;	// reference uses dot "." member access

}


