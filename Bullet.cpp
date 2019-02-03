#include "Bullet.h"

Bullet::Bullet(){

}

Bullet::~Bullet(){

}

int Bullet::getCoord_X(){
	return x;
}

int Bullet::getCoord_Y(){
	return y;
}


void Bullet::setCoord (int a, int b){
	x = a;
	y = b - 1;
}

void Bullet::setC(int h){
	c = h;
}


void Bullet::move(){
	if(c == 0)
		return;

	if(y > 1){
		rlutil::locate(x, y); cout << " ";	//Erase bullet
		y--;
		rlutil::setColor(4);
		rlutil::locate(x,y); cout << ".";	//Output bullet
		rlutil::setColor(15);
	}
}
