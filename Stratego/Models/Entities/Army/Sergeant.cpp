#include "Soldier.h"

class Sergeant : public Soldier {   
    private:
    public:  
        Sergeant(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Sergeant() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};