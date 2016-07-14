class Horse : public Weapon{
    private:
    public:
        Horse(int hpi, int wpi, int hitmultii, weighti) 
        : Weapon(hpi, wpi, hitmultii, weighti) {
            
        }
        ~Horse();
        void Hit();
        void Wear();
};