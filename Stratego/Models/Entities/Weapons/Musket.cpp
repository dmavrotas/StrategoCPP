class Musket : public Weapon{
    private:
    public:
        Musket(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Musket();
        void Hit();
        void Wear();
};