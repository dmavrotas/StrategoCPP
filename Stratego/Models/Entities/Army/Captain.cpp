class Captain : public Soldier {   
    private:
    public:  
        Captain(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Captain() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};