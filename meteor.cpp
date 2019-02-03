#include "meteor.h"


meteor::meteor(){
    
    shape="*";
    y=2;
    x=rand()%26+1;

    health=rand()%3+1;
    
}


void meteor::fall(){
    
    y+=1;
    
}



int meteor::damaged(){
    
    health -=1;
   
    rlutil::locate(x,y); cout << " ";
    rlutil::locate(x,y - 1); cout << " ";
    
    if(health==0){
        
        
        
        y=2;
        x=rand()%26+1;
        health=rand()%3+1;

        
        return 1;
        
    }
    
    return 0;
    
}

int meteor::xc(){
    return x;
    
}

int meteor::yc(){
    return y;
    
}

void meteor::random(){
    
    rlutil::locate(x,y-1); std::cout << " ";
    x=rand()%26+1;
    y=2;
    health=rand()%3+1;

    
}


void meteor::moveto(){
        
        
        rlutil::locate(x,y-1); std::cout << " ";
        rlutil::locate(x,y);
        if(health==1){rlutil::setColor(12);}
        else if(health==2){rlutil::setColor(14);}
        else if(health==3){rlutil::setColor(11);} 
        cout<<shape;
        y++;
        if(y==28){
            x=rand()%26+1;
            y=2;}
        
}

    void meteor::write(){
        
        
        rlutil::locate(x,y-1);
        if(health==1){rlutil::setColor(12);}
        else if(health==2){rlutil::setColor(14);}
        else if(health==3){rlutil::setColor(11);} 
        cout<<shape;
        
        
        
        
    }
    



