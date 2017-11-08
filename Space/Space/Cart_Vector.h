using namespace std;
#include <iostream>

#ifndef CV_H
#define CV_H

class Cart_Vector {
public:
	double x, y;
	Cart_Vector();
	Cart_Vector(double, double);

};

Cart_Vector operator* (const Cart_Vector&, double);
Cart_Vector operator/ (const Cart_Vector&, double);
ostream& operator<< (ostream& os, const Cart_Vector& cv);

#endif