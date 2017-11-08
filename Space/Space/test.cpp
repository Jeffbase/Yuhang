#include <iostream>
#include "Cart_Point.h"
#include "Cart_Vector.h"
#include "Game_Object.h"
using namespace std;


int main() {
	Cart_Point a = Cart_Point(1, 2);
	Cart_Point b = Cart_Point(3, 6);
	Cart_Point c = a + b;
	Cart_Vector d = a - b;
	cout << c << endl;
	cout << d << endl;
	Cart_Vector v1 = Cart_Vector();
	Cart_Vector v2 = Cart_Vector(4, 6);
	Cart_Vector v3 = v2 * 2;
	Cart_Vector v4 = v2 / 2;
	cout << v3 << endl;
	cout << v4 << endl;

	char treeview = 't';
	int treenum = 3;
	Cart_Point trees = Cart_Point(3,4);
	Game_Object tree = Game_Object(trees, treenum, treeview);
	Game_Object tree2 = Game_Object(treeview);

	tree.show_status();
	cout << endl;
	tree2.show_status();

	int k;
	cin >> k;
	return 0;
}