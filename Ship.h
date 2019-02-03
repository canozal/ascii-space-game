#pragma once

#include <iostream>
using namespace std;

class Ship {
private:
	int health;
	int ammo;
public:
	Ship();	//Default constructor
	Ship(int, int);	//Overloaded constructor with Health and Ammo
	void setHealth(int, int);
	int getHealth();
	void setAmmo(int, int);
	int getAmmo();
};
