class Grenade : public Weapon{
    private:
    public:
        Grenade(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Grenade();
        void Hit();
        void Wear();
};