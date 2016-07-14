class Bomb : public Weapon{
    private:
    public:
        Bomb(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Bomb();
        void Hit();
        void Wear();
};