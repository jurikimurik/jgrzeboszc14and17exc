#include <iostream>
using namespace std;
//************************************************************************************************
template <typename T, typename ... Tpakiet>
void funkcja(const T& argument, const Tpakiet& ... pakiet)
{
    cout << argument << ' ';

    if constexpr(sizeof...(Tpakiet) > 0)
    {
        funkcja(pakiet...);
    }
}
//************************************************************************************************
int main()
{
    const string hello{"Hello"};
    const int licz{69};
    const char znak{'8'};
    const float zm{12.3};

    funkcja(hello, licz, znak, zm);
}