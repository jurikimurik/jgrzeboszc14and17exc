#include <iostream>
using namespace std;
//************************************************************************************************************************
template <typename T, typename ... Args>
auto wpisz_wartosc_do_zmiennych(T wartosc, Args & ... args)
{
    ((args = wartosc), ...);
}
//************************************************************************************************************************
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    wpisz_wartosc_do_zmiennych(5.12, a, b, c);

    cout << a << ", " << b << ", " << c << endl;
}