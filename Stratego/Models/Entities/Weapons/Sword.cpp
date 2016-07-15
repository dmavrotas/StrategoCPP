class Sword : public Weapon{
    private:
    public:
        Sword(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Sword();
        void Hit();
        void Wear();
};