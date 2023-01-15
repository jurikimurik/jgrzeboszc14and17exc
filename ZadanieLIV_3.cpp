#include <iostream>
#include <vector>
#include <list>
using namespace std;
//****************************************************************************************************
template<
            typename Typ,
            template<typename Tp> typename Tpoj     // lub zamiast typename mozna class
        >
struct Tzadanie
{
    Tpoj<Typ> pojemnik;

    void wkladaj(Typ arg)
    {
        pojemnik.push_back(arg);
    }

    void pokaz()
    {
        for(auto & elem : pojemnik)
        {
            cout << elem << ", ";
        }

        cout << endl;
    }
};
//****************************************************************************************************
int main()
{
    Tzadanie<int, std::vector> pp;
    Tzadanie<int, std::list> lp;

    pp.wkladaj(10);
    pp.wkladaj(20);
    pp.wkladaj(30);

    pp.pokaz();

    lp.wkladaj(45);
    lp.wkladaj(123);
    lp.wkladaj(933);

    lp.pokaz();
}