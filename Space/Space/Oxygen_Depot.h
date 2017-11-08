#include "Game_Object.h"
#include "Cart_Point.h"

#ifndef OD
#define OD

class Oxygen_Depot: public Game_Object {
private:
	double amount_oxygen;


public:
	Oxygen_Depot();
	Oxygen_Depot(Cart_Point, int);
	bool is_empty();
	double extract_oxygen(double);
	bool update();
	void show_status();

};

#endif
