class Weapon {
    private:
        int hp;
        int wp;
        int hitmulti;
        int weight;
    public:
        Weapon(int hpi, int wpi, int hitmultii, weighti) {
            hp = hpi;
            wp = xpi;
            hitmulti = hitmultii;
            weight = weighti
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
        virtual void Hit();
        virtual void Wear();
};