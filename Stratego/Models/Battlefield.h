class Battlefield {
    private:
        char* name;
    public:
        Battlefield(char* name, int height, int width);
        ~Battlefield();
        char* GetName() { return name; }
};