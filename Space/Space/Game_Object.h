#include "Cart_Point.h"

#ifndef GB
#define GB
class Game_Object
{
protected:
	Cart_Point location;
	int id_num;
	char display_code;
	char state;
public:
	Game_Object(char);
	Game_Object(Cart_Point, int , char);
	Cart_Point get_location();
	int get_id();
	char get_state();
	void show_status();
};

#endif