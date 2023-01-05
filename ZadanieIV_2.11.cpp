#include <iostream>
#include <string>
#include <bitset>
using namespace std;
//**************************************************************************************************************
int main()
{
    // Przyjmowanie liczby w systemie binarnym z klawiatury

    cout << "Podaj liczbe w systemie dwojkowym: ";

    string tekst;
    cin >> tekst;

    if(tekst.find("0b") == 0)
    {
        tekst.replace(0, 2, "");
    }
    while(tekst.find("'") != string::npos)
    {
        tekst.replace(tekst.find("'"), 1, "");
    }

    bitset<8 * sizeof(unsigned long)> bbb(tekst);
    auto liczba = bbb.to_ulong();

    cout << "Przyjeta liczba dwojkowa to dziesiatkowo " << liczba << endl;
}