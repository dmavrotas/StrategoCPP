#include "Models/Weapon.h"

class Cannon : public Weapon{
    private:
    public:
        Cannon(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Cannon();
        void Hit();
        void Wear();
};