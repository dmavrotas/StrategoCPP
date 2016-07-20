class Horse : public Weapon{
    private:
    public:
        Horse(int hpi, int wpi, int hitmultii, int weighti, int leveli) 
        : Weapon(hpi, wpi, hitmultii, weighti, leveli) {
            
        }
        ~Horse();
        void Hit();
        void Wear();
};