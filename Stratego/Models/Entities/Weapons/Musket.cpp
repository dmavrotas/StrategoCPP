class Musket : public Weapon{
    private:
    public:
        Musket(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Musket();
        void Hit();
        void Wear();
};