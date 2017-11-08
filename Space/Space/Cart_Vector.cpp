#include <iostream>
#include "Cart_Vector.h"
using namespace std;

Cart_Vector::Cart_Vector() {
	x = 0.0;
	y = 0.0;
}

Cart_Vector::Cart_Vector(double inputx, double inputy) {
	x = inputx;
	y = inputy;
}

Cart_Vector operator* (const Cart_Vector& a, double d) {
	Cart_Vector out;
	out.x = a.x * d;
	out.y = a.y * d;
	return out;
}

Cart_Vector operator/ (const Cart_Vector& a, double d) {
	Cart_Vector out;
	out.x = a.x / d;
	out.y = a.y / d;
	return out;
}

ostream& operator<< (ostream& os, const Cart_Vector& cv) {
	os << "<" << cv.x << ", " << cv.y << ">";
	return os;
}






