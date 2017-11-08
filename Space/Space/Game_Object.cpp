#include "Game_Object.h"
#include <iostream>
#include "Cart_Point.h"



Game_Object::Game_Object(char in_code)
{
	display_code = in_code;
	id_num = 1;
	state = 's';
	cout << "Game_Object constructed." << endl;
}


Game_Object::Game_Object(Cart_Point in_loc, int in_id, char in_code)
{
	location = in_loc;
	display_code = in_code;
	id_num = in_id;
	state = 's';
	cout << "GAme_Object constructed." << endl;
}

Cart_Point Game_Object::get_location() {
	return location;
}

int Game_Object::get_id() {
	return id_num;
}

char Game_Object::get_state() {
	return state;
}

void Game_Object::show_status() {
	cout << "<" << display_code << "><" << id_num << "> at <" << location << ">";
}