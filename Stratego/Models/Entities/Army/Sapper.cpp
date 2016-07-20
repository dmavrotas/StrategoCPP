class Sapper : public Soldier {   
    private:
    public:  
        Sapper(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~Sapper() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};