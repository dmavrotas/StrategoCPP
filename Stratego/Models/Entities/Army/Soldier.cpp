class Soldier : public Person {   
    private:
        int accuracy;
        int armor;
        Weapon* weapon;
    public:  
        Soldier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi) 
        : Person(hpi, xpi) { 
            accuracy = accuracyi;
            armor = armori;
            weapon = weaponi;
        } 
        ~Soldier() { } 
         virtual void Attack();
         virtual void Defend();
         virtual void Move(int x, int y);
};