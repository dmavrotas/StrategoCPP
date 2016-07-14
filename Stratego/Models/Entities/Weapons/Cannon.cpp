class Cannon : public Weapon{
    private:
    public:
        Cannon(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Cannon();
        void Hit();
        void Wear();
};