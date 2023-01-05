#include <iostream>
using namespace std;
//******************************************************
template<typename T, typename ... Tpakiet>
void funkcja(T * argument, Tpakiet * ... pakiet)
{
    (*argument)++;

    if constexpr(sizeof...(Tpakiet) > 0)
    {
        funkcja(pakiet...);
    }
}
//******************************************************
int main()
{
    int a {10};
    double b {-1};
    char c {'A'};

    funkcja(&a, &b, &c);

    cout << a << ", " << b << ", " << c << endl;
}