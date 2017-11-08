using namespace std;
#include <iostream>
#include "Cart_Vector.h"

#ifndef CP_H
#define CP_H

class Cart_Point {
public:
	double x, y;
	Cart_Point();
	Cart_Point(double, double);
};

double cart_distance(Cart_Point, Cart_Point);
ostream& operator<< (ostream& os, const Cart_Point& cp);
Cart_Point operator+ (const Cart_Point &a, const Cart_Point&);
Cart_Vector operator- (const Cart_Point &a, const Cart_Point&);

#endif

