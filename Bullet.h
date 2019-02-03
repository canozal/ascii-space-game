#pragma once

#include "rlutil.h"
#include <iostream>
using namespace std;

class Bullet {
private:
	int x;
	int y;
	int c;
public:
	Bullet();
	~Bullet();
	int getCoord_X();
	int getCoord_Y();
	void setCoord (int, int);
	void setC(int);
	void move();
};
