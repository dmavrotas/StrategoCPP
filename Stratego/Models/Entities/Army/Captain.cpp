class Captain : public Soldier {   
    private:
    public:  
        Captain(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Captain() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};