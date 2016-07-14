class Lieutenant : public Soldier {   
    private:
    public:  
        Lieutenant(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Lieutenant() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};