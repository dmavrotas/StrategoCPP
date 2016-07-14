class Flag{
    private:
        char* color;
        char* name;
    public:
        Flag(char* colori, char* namei);
        ~Flag();
        char* GetColor() { return color; }
        char* GetName() { return name; }
};