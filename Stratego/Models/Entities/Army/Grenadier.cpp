#include "Soldier.h"

class Grenadier : public Soldier {   
    private:
    public:  
        Grenadier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Grenadier() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};