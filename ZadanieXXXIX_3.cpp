#include <iostream>
using namespace std;
//********************************************************************************************************************
template <auto stala>
struct Tklasa_szablonowa
{
    using T = decltype(stala);

    T roboczy = stala;
    T tablica[stala];

    Tklasa_szablonowa()
    {
        cout << __PRETTY_FUNCTION__ << endl;
    }

    void wypelnij_tablice(T wartosc)
    {
        for (int i = 0; i < stala; i++)
        {
            tablica[i] = wartosc;
        }
    }

    void pokaz_tablice(int ile)
    {
        for (int i = 0; i < stala && i < ile; i++)
        {
            cout << tablica[i] << ", ";
        }
        cout << endl;
    }
};
//********************************************************************************************************************
int main()
{
    Tklasa_szablonowa<5 + 1uL>  czerwony;
    Tklasa_szablonowa<'k'>      zolty;

    czerwony.wypelnij_tablice(10);
    czerwony.pokaz_tablice(10);

    zolty.wypelnij_tablice('p');
    zolty.pokaz_tablice(20);
}