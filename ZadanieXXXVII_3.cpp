#include <iostream>
#include <sstream>
#include <string>
using namespace std;
//******************************************************************************************************************************************
template <typename... Args>
auto wpisz_do_stringu_zlepione(Args... args)
{
    ostringstream strumien;
    ((strumien << args << ", "), ...);
    return strumien;
}
//******************************************************************************************************************************************
template <typename... Args>
auto wpisz_do_stringu_oddzielone(string rozdielacz, Args... args)
{
    ostringstream strumien;
    ((strumien << args << rozdielacz), ...);

    return strumien;
}
//******************************************************************************************************************************************
int main()
{
    string cos;
    cos = wpisz_do_stringu_oddzielone(" | ", "ABC", 2u, string("***"), 3.14, -100L, 'a', 44).str();
    cout << cos;
}