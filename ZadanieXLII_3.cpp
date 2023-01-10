#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tklucz
{
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tklucz_gerda : public Tklucz
{
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tklucz_yale : public Tklucz
{
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tklucz_skarabeusz : public Tklucz
{
    int poziom()
    {
        return 10;
    }
};
////////////////////////////////////////////////////////////////////////////////////////////////
struct Tklucz_anubis : public Tklucz
{
    int poziom()
    {
        return 5;
    }
};

////////////////////////////////////////////////////////////////////////////////////////////////
template <typename T>
std::false_type czy_lubiany_typ;
////////////////////////////////////////////////////////////////////////////////////////////////
template <>
std::true_type czy_lubiany_typ<Tklucz_skarabeusz>;
////////////////////////////////////////////////////////////////////////////////////////////////
template <>
std::true_type czy_lubiany_typ<Tklucz_anubis>;
//**********************************************************************************************
template<typename T>
void otwarcie_skarbca(T k)
{
    if constexpr(czy_lubiany_typ<T>)
    {
        cout << "Otworzyles skarbiec! Poziom: " << k.poziom() << endl;
    } else {
        cout << "Otwarcie fikcyjnej pustej komory!" << endl;
    }
}
//**********************************************************************************************
int main()
{
    Tklucz_anubis       kluczA;
    Tklucz_gerda        kluczG;
    Tklucz_skarabeusz   kluczS;
    Tklucz_yale         kluczY;

    otwarcie_skarbca(kluczA);
    otwarcie_skarbca(kluczG);
    otwarcie_skarbca(kluczS);
    otwarcie_skarbca(kluczY);
}