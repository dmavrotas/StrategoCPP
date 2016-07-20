class Grenade : public Weapon{
    private:
    public:
        Grenade(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Grenade();
        void Hit();
        void Wear();
};