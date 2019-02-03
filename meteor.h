#ifndef meteor_h
#define meteor_h

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "rlutil.h"

using namespace std;

class meteor{
    
protected:

    int x;
    int y;
    string shape;
    
public:
    meteor();
    void fall();
    int damaged();
    void moveto();
    int health;
    int xc();
    int yc();
    void random();
    void write();
    int rpoint();
};






#endif
