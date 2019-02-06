#include "meteor.h"
#include "Ship.h"
#include "Bullet.h"
#include "rlutil.h"
#include <iostream>
#define waitkey rlutil::anykey("Press any key to continue...\n")
using namespace std;

int main(){    srand(time(NULL)); 

    int p=0;
    meteor *m=new meteor[10];
    
    int ch;
	
    Ship s(3,150);
	int x = 15, y = 15, i = 0;
	unsigned int cnt = 0;

	Bullet *b = new Bullet[10];
    rlutil::cls();
 
    rlutil::locate(1,1);
    
    cout << "If you want to change the speed of the meteorites or bullets,\nyou can change the code line where i specified in main.cpp\n\n";

    
    
    
    waitkey;

    
    rlutil::hidecursor();
	rlutil::cls();
	rlutil::setColor(15);
	rlutil::locate(x,y); cout << 'A' << endl; // Output player

    rlutil::locate(30,4);
    cout << "Point: ";
    
	
    while (true) {
		rlutil::locate(30,2);
		cout << "Health: " << s.getHealth();
        
        rlutil::locate(36,3);
        cout << "   ";

		
        rlutil::locate(30,3);
		cout << "Ammo: " << s.getAmmo();
        rlutil::locate(30,4);
        cout << "Point: "<<p;
        
		rlutil::locate(1,1);
		rlutil::setColor(5);

		for(int i = 0; i < 28; i++){	//Drawing borders
			rlutil::locate(i,1);
			cout << '-';
			rlutil::locate(i,27);
			cout << '-';
		}

		for(int i = 2; i < 27; i++){	//Drawing borders
			rlutil::locate(1,i);
			cout << '|';
			rlutil::locate(27,i);
			cout << '|';
		}

		if(cnt % 100 == 0){		//Output of bullets (you can change speed of the bullet from this line.)
			for(int j = 0; j < 10; j++){
				b[j].move();
			}
		}

		rlutil::setColor(15);
		
		if (kbhit()) {
			char k = getch(); // Get character
			rlutil::locate(x,y); std::cout << " "; // Erase player
			if (k == 'a'){
				if(x > 2)
					--x;
			}
			else if (k == 'd'){
				if(x < 26)
					++x;
			}
		
			else if (k == 'w'){
				if(y > 2)
					--y;
			}
			else if (k == 's'){
				if(y < 26)
					++y;
			}
			else if (k == 'k'){			//Fire
				if(s.getAmmo() > 0){
					b[i].setCoord(x,y);
					b[i].setC(1);
					s.setAmmo(0,2);
					i++;
					if(i > 9)
						i = 0;
				}
			}
			else if (k == ' ') break;

			rlutil::locate(x,y); std::cout << 'A'; // Output player
		}
		std::cout.flush();
		cnt++;

	if(cnt>1500){

		if(cnt%1500==0){          // you can change speed of the meteor1 from this line.

			m[0].moveto();

		}

	}

	if(cnt>3000){        

		if(cnt%1500==0){        // you can change speed of the meteor2 from this line.

			m[1].moveto();

		}

	}

	if(cnt>6000){        

		if(cnt%1500==0){              // you can change speed of the meteor3 from this line.

			m[2].moveto();

		}

	}

	if(cnt>12000){

		if(cnt%1500==0){            // you can change speed of the meteor4 from this line.

			m[3].moveto();

		}

	}

	if(cnt>9000){

		if(cnt%1500==0){           // you can change speed of the meteor5 from this line.

			m[4].moveto();

		}

	}

	if(cnt>18000){

		if(cnt%1500==0){          // you can change speed of the meteor6 from this line.

			m[5].moveto();

		}

	}

	if(cnt>12000){

		if(cnt%1750==0){         // you can change speed of the meteor7 from this line.

			m[6].moveto();

		}

	}

	if(cnt>20000){

		if(cnt%1500==0){         // you can change speed of the meteor8 from this line.

			m[7].moveto();

		}

	}

	if(cnt>25000){

		if(cnt%1500==0){        // you can change speed of the meteor9 from this line.

			m[7].moveto();

		}

	}

	if(cnt>30000){

		if(cnt%1500==0){        // you can change speed of the meteor10 from this line.

			m[8].moveto();

		}

	}

	if(cnt>35000){

		if(cnt%1500==0){        // you can change speed of the meteor11 from this line.

			m[9].moveto();

		}

	}
            

        
		
		for(int i = 0; i < 10; i++){
			for(int j = 0; j < 10; j++){
				if(b[i].getCoord_Y() == m[j].yc()){
					if(b[i].getCoord_X() == m[j].xc()){
						b[i].setCoord(0,0);
                        if(m[j].damaged()){
                        rlutil::locate(30,4);
                        p += 100;
                        cout << "Point: " << p;
                            
                        }
                        else{m[j].write();}
					}
				}
			}
		}
		
		
		for(int j = 0; j < 10; j++){
				if(y == m[j].yc()){
					if(x == m[j].xc()){
                        m[j].random();
                        s.setHealth(0,2);
                        
                        }
					}
				}
			
		
		
		
		
		
		
		
	
	if(s.getAmmo()==0)
        break;
	if(s.getHealth()==0)
        break;
    
	
	}
    
    
    rlutil::cls();
    rlutil::setColor(14);
    rlutil::locate(1,1);
    cout << "game over  \nthank you for playing"<<endl;
    cout << "Your score: "<<p<<endl;
    waitkey;

	
}
