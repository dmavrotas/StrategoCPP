class General : public Soldier {   
    private:
    public:  
        General(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Soldier(hpi, xpi, accuracyi, armori, weaponi, leveli) { 
        } 
        ~General() { } 
         void Attack();
         void Defend();
         void Move(int x, int y);
};