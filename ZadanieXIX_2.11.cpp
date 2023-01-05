class K
{
    public:
        [[deprecated("Juz nie korzystaj ze zmiennej rysik")]] int rysik;

        [[deprecated("Nie uzywaj juz funkcji void rysowanie()")]]
        void rysowanie() {
            rysik += 2;
        }
};
//****************************************************************************************************************
int main()
{
        K objekt;
        objekt.rysik = 20;
        objekt.rysowanie();
}