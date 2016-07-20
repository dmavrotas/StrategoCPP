#include "Soldier.h"

class Lieutenant : public Soldier {   
    private:
    public:  
        Lieutenant(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Lieutenant() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};