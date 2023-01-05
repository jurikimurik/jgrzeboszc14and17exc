#include <iostream>
using namespace std;
//*******************************************************************************************
template <typename T, typename ... Tpakiet>
void funkcja(T * const argument, Tpakiet * const ... pakiet)
{
    ++(*argument);

    if constexpr(sizeof...(Tpakiet) > 0)
    {
        funkcja(pakiet...);
    }
}
//*******************************************************************************************
int main()
{
    int a {20};
    double b {2020202020};
    char c {'L'};

    funkcja(&a, &b, &c);

    cout << a << ", " << b << ", " << c << endl;
}