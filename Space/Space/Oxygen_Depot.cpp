#include <iostream>
#include "Oxygen_Depot.h"
using namespace std;



Oxygen_Depot::Oxygen_Depot() : Game_Object('O'){
	amount_oxygen = 50;
	state = 'f';
	cout << "Oxygen_Depot constructed." << endl;
}

Oxygen_Depot::Oxygen_Depot(Cart_Point inputLoc, int inputId) : Game_Object('O'){
	amount_oxygen = 50;
	id_num = inputId;
	location = inputLoc;
	state = 'f';
	cout << "Oxygen_Depot constructed." << endl;
}

bool Oxygen_Depot::is_empty() {
	if (amount_oxygen = 0) {
		return true;
	}
	else
		return false;
}

double Oxygen_Depot::extract_oxygen(double amount_to_extract = 20.0) {
	if (amount_oxygen >= amount_to_extract) {
		amount_oxygen -= amount_to_extract;
		return amount_to_extract;
	}
	else {
		double out = amount_oxygen;
		amount_oxygen = 0;
		return out;
	}
}

bool Oxygen_Depot::update() {
	if (is_empty()) {
		state = 'e';
		display_code = 'o';
		cout << "Oxygen_Depot (" << id_num << ") has been depleted." << endl;
		return true;
	}
	else
		return false;
}

void Oxygen_Depot::show_status() {
	cout << "Oxygen Depot status: " << display_code << id_num << " at location " << location << " contains " << amount_oxygen << "." << endl;
}


