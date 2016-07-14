struct Tile {
    private:
        Person** people;
        int difficulty;
    public:
        Tile(Person** peoplei);
        ~Tile();
        Person** GetPeople() { return people; }
        int GetDifficulty() { return difficulty; }
};