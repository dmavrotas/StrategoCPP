#include "Models/Weapon.h"

class Bomb : public Weapon{
    private:
    public:
        Bomb(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Bomb();
        void Hit();
        void Wear();
};