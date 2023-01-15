#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Tp1
{
    public:
    void analiza(Tp1 *adr) {
        cout << "hmmm.... Tp1?" << __PRETTY_FUNCTION__ << endl;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Tp2
{
public:
    void analiza(Tp2 *adr)
    {
        cout << "hmmm.... Tp2!?" << __PRETTY_FUNCTION__ << endl;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template<typename... Tkl_podstawowe>
class K : Tkl_podstawowe... {   

    public:

    using Tkl_podstawowe::analiza...;
};
//**********************************************************************************************************************
int main()
{
    Tp1 x;
    Tp2 y;
    K<Tp1, Tp2> p;
    K<Tp1> r;

    p.analiza(&x);
    p.analiza(&y);
}