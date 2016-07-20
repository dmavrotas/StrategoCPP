#include "Soldier.h"

class Marshal : public Soldier {   
    private:
    public:  
        Marshal(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Marshal() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};