#include <iostream>
#include <vector>
#include <list>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tmoj_pojemnik
{
    int tablica[100];

    int pozycja_wolna = 0;      // indeks pierwszego wolnego elementu tablicy

    void dopisz (int obj)
    {
        cout << "dopisanie: " << obj << endl;
        tablica[pozycja_wolna++] = obj;
    }
    // itd.
};
//**********************************************************************************************
int* begin (Tmoj_pojemnik &p)
{
    return p.pozycja_wolna > 0 ? &p.tablica[0] : nullptr;
}
////////////////////////////////////////////////////////////////////////////////////////////////
class Titerator_biegajacy
{
    Tmoj_pojemnik *wsk_mpoj;

    int bieznik = 0;

public:
    Titerator_biegajacy(Tmoj_pojemnik *wsk) : wsk_mpoj(wsk) {}

    Titerator_biegajacy & operator++() {
        bieznik++;
        return *this;
    }

    int & operator*() {
        return bieznik;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////
class Titerator_konca
{
    Tmoj_pojemnik *wsk_mpoj;
    public:
    Titerator_konca(Tmoj_pojemnik *wsk) : wsk_mpoj (wsk)
    {}
    int * gdzie_koniec()
    {
        return &wsk_mpoj->tablica[wsk_mpoj->pozycja_wolna];
    }
};
//**********************************************************************************************
Titerator_konca end (Tmoj_pojemnik &p)
{
    Titerator_konca it(&p);
    return it;
}
//**********************************************************************************************
bool operator!= (int * it_obecnie, Titerator_konca ik)
{
    return it_obecnie != ik.gdzie_koniec();
}
//**********************************************************************************************
int main()
{
    Tmoj_pojemnik poj;

    poj.dopisz(50);
    poj.dopisz(60);
    poj.dopisz(70);

    for(auto & elem : poj)
    {
        cout << " element = " << elem;
        elem += 1000;
    }

    cout << "\nSprawdzenie, czy modyfikacja zadzialała\n";
    //zakresowa petla for odpowiada ponizszej ZWYCZAJNEJ PETLI FOR
    int *b = begin(poj);
    Titerator_konca e = end(poj);

    for (; b != e.gdzie_koniec(); ++b)
    {
        auto &elem = *b;
        cout << "element = " << elem << ", ";
    }
}