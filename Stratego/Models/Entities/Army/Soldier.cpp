class Soldier : public Person {   
    private:
        int accuracy;
        int armor;
        int level;
        Weapon* weapon;
    public:  
        Soldier(int hpi, int xpi, int accuracyi, int armori, Weapon* weaponi, int leveli) 
        : Person(hpi, xpi) { 
            accuracy = accuracyi;
            armor = armori;
            level = leveli;
            weapon = weaponi;
        } 
        ~Soldier() { } 
        int GetAccuracy() { return accuracy; }
        void SetAccuracy(int accuracyi) {
            accuracy = accuracyi;
        }
        int GetArmor() { return armor; }
        void SetAccuracy(int armori) {
            armor = armori;
        }
        int GetLevel() { return level; }
        void SetLevel(int leveli) {
            level = leveli;
        }
        Weapon* GetWeapon() { return weapon; }
        void SetWeapon(int weaponi) {
            weapon = weaponi;
        }
         virtual void Attack();
         virtual void Defend();
         virtual void Move(int x, int y);
};