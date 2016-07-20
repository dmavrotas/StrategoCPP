#include "Soldier.h"

class Bombardier : public Soldier {   
    private:
    public:  
        Bombardier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Bombardier() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};