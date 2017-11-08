#include "Space_Station.h"
#include <iostream>
#include "Game_Object.h"
using namespace std;


Space_Station::Space_Station() : Game_Object('s')
{
	amount_moonstones = 0;
	number_astronauts = 0;
	state = 'o';
	cout << "Space_Station default constructed." << endl;
}


Space_Station::Space_Station(Cart_Point inputLoc, int inputId) :Game_Object('s')
{
	amount_moonstones = 0;
	number_astronauts = 0;
	state = 'o';
	id_num = inputId;
	location = inputLoc;
	cout << "Space_Station constructed." << endl;
}

void Space_Station::deposit_moonstones(double deposit_amount) {
	amount_moonstones += deposit_amount;
}

bool Space_Station::add_astronaut() {
	if (state == 'u') {
		number_astronauts++;
		return true;
	}
	else {
		return false;
	}

}

bool Space_Station::update() {
	if (amount_moonstones >= 10) {
		state = 'u';
		display_code = 'S';
		cout << "<display_code><id_num> has been upgraded." << endl;
		return true;
	}
	else
		return false;
}

void Space_Station::show_status() {
	if (update()) {
		cout << "Space Station status: " << display_code << id_num << "at " << location << " contains " << amount_moonstones << " moon stones and contains " << number_astronauts << " astronausts. Upgraded." << endl;
	}
	else {
		cout << "Space Station status: " << display_code << id_num << "at " << location << " contains " << amount_moonstones << " moon stones and contains " << number_astronauts << " astronausts. Not yet upgraded." << endl;
	}
}