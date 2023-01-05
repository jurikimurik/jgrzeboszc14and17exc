#include <iostream>
using namespace std;
//*******************************************************************************************
template <typename T, typename... Tpakiet>
void funkcja(const T *const argument, const Tpakiet *const... pakiet)
{
    cout << *argument << ' ';

    if constexpr (sizeof...(Tpakiet) > 0)
    {
        funkcja(pakiet...);
    }
}
//*******************************************************************************************
int main()
{
    string el{"elo"};
    double d{22323};
    char n{'N'};

    funkcja(&el, &d, &n);

}