class Marshal : public Soldier {   
    private:
    public:  
        Marshal(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Marshal() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};