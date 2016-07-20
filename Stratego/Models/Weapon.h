class Weapon {
    private:
        int hp;
        int wp;
        int hitmulti;
        int weight;
        int level;
    public:
        Weapon(int hpi, int wpi, int hitmultii, int weighti, int leveli) {
            hp = hpi;
            wp = wpi;
            hitmulti = hitmultii;
            weight = weighti;
            level = leveli;
        }
        ~Weapon();
        int GetWP() { return wp; }
        void SetWP(int wpi) {
            wp = wpi;
        }
        int GetHP() { return hp; }
        void SetHP(int hpi) {
            hp = hpi;
        }
        int GetHitMulti() { return hitmulti; }
        void SetHitMulti(int hitmultii) {
            hitmulti = hitmultii;
        }
        int GetWeight() { return weight; }
        void SetWeight(int weighti) {
            weight = weighti;
        }
        int GetLevel() { return level; }
        void SetLevel(int leveli) {
            level = leveli;
        }
        virtual void Hit();
        virtual void Wear();
};