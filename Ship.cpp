#include "Ship.h"

Ship::Ship(){
	health = 3;
	ammo = 25;
}

Ship::Ship(int h, int a){
	health = h;
	ammo = a;
}

void Ship::setHealth(int h, int x){
    if(x == 1){
        health++;
        return;
    }
    else if(x == 2){
        health--;
        return;
    }
    else
        health = h;
}

int Ship::getHealth(){
	return health;
}

void Ship::setAmmo(int a, int x){
	if(x == 1){
		ammo++;
		return;
	}
	if(x == 2){
		ammo--;
		return;
	}
	else
		ammo = a;
}

int Ship::getAmmo(){
	return ammo;
}
