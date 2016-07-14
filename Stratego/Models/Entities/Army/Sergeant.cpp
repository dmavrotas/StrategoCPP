class Sergeant : public Soldier {   
    private:
    public:  
        Sergeant(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi) { 
        } 
        ~Sergeant() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};