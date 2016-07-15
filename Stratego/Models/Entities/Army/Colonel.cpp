class Colonel : public Soldier {   
    private:
    public:  
        Colonel(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Colonel() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};