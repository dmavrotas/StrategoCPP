class Bombardier : public Soldier {   
    private:
    public:  
        Bombardier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Bombardier() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};