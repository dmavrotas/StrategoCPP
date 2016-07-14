class Sword : public Weapon{
    private:
    public:
        Sword(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Sword();
        void Hit();
        void Wear();
};