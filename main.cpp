//                                  Feb 2022
/**
 * Dynamic allocation of memory to store Class objects.
 *
 */
#include "Rectangle.h"  // include the class definition
#include <iostream>
using namespace std;

void display_using_pointer(Rectangle* );
void display_using_reference(Rectangle&);

int main() {

	Rectangle rect(3, 4);		// creates automatic variable - on Stack

	Rectangle* pRect;			// declare a pointer to rect

	pRect = &rect;	// put pointer pRect pointing at rect object

	cout << pRect->area() << endl;	// access member function using pointer

	// TODO - draw the memory diagram

	// Demo - DYNAMICALLY ALLOCATE a single Rectangle class object using 'new'  (on Heap)

	pRect = new Rectangle(5, 5);

    cout<< "Dynamically Allocated Rectangle object: " << endl;
	cout << pRect->area() << endl;	// access the member function using the pointer

	display_using_pointer(pRect);

	display_using_reference(*pRect);

	delete pRect;		// free up memory when finished with it.
	pRect = nullptr;    // set pointer to null to prevent dangling pointer


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

	// Normally we will use the vector class in C++ to store an array of Class objects.

	return 0;
}

void display_using_pointer(Rectangle* pRect) {

	cout << pRect->area() << endl;	// pointer uses arrow "->"  member access
}

void display_using_reference(Rectangle& rect) {

	cout << rect.area() << endl;	// reference uses dot "." member access

}


