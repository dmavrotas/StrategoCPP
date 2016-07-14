class Grenadier : public Soldier {   
    private:
    public:  
        Grenadier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Grenadier() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};