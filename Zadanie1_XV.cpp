#include <iostream>
using namespace std;
//***********************************************************************************************
template <typename... Tpakiet>
void pokaz(Tpakiet... pakiet)
{
    int tablica[sizeof...(pakiet) + 1] = { (cout << pakiet << " ", 0)... };
}
//***********************************************************************************************
template <typename T, typename... Tpakiet>
auto suma(T argument, Tpakiet... pakiet)
{
    if constexpr (sizeof...(Tpakiet) > 0)
    {
        return argument + suma(pakiet...);
    }
    else
        return argument;
}
//***********************************************************************************************
template <typename... Tpakiet>
void warsztat(Tpakiet... args)
{
    pokaz(args...);
    pokaz(2 * args...);
    pokaz(args + 5 ...);
    pokaz(args * args...);
    pokaz(args..., args...);
    pokaz(suma(args...) + args...);
}
//***********************************************************************************************
int main()
{
    warsztat(1, 2.0, 3);
}