#include <iostream>
#include <math.h>
#include "Cart_Point.h"
#include "Cart_Vector.h"
using namespace std;

Cart_Point::Cart_Point() {
	x = 0;
	y = 0;
}

Cart_Point::Cart_Point(double inputx, double inputy) {
	x = inputx;
	y = inputy;
}


double cart_distance(Cart_Point p1, Cart_Point p2) {
	return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

ostream& operator<< (ostream& os, const Cart_Point& cp)  {
	os << "(" << cp.x << ", " << cp.y << ")";
	return os;
}

Cart_Point operator+ (const Cart_Point &a, const Cart_Point &b) {
	Cart_Point point;
	point.x = a.x + b.x;
	point.y = a.y + b.y;
	return point;
}

Cart_Vector operator- (const Cart_Point &a, const Cart_Point &b) {
	Cart_Vector point;
	point.x = a.x - b.x;
	point.y = a.y - b.y;
	return point;
}