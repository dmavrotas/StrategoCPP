class Person {
    private:
        int hp;
        int xp;
    public:
        Person(int hpi, int xpi) {
            hp = hpi;
            xp = xpi;
        }
        ~Person(){ }
        int GetXP() { return xp; }
        void SetXP(int xpi) {
            xp = xpi;
        }
        int GetHP() { return hp; }
        void SetHP(int hpi) {
            hp = hpi;
        }
        virtual void Attack();
        virtual void Defend();
        virtual void Move(int x, int y); 
};