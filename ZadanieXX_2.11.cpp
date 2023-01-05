class K
{
public:
    int rysik;

    void rysowanie()
    {
        rysik += 2;
    }
};
//****************************************************************************************************************
[[deprecated("Korzystanie ze zmiennej globalnej 'objekt' bardzo sie nie poleca!")]] K objekt;
//****************************************************************************************************************
int main()
{
    
    objekt.rysik = 20;
    objekt.rysowanie();
}