#include <iostream>
using namespace std;

char tablica[10];
//******************************************************************************************************************************************************************
template <auto stala_liczba, auto cos>
void something(int argument)
{
    enum {
        primus = stala_liczba,
        inter = primus * 2,
        pares = primus * 4
        };

    char znak;
    switch (argument)
    {
    case primus:
        znak = '#';
        break;
    case inter:
        znak = '@';
        break;
    case pares:
        znak = '*';
        break;
    default:
        znak = '.';
    }
    for (int i = 0; i < 10; i++)
    {
        cos[i] = znak;
    }
}
//******************************************************************************************************************************************************************
int main()
{
    something<1, tablica>(1);

    for (int i = 0; i < 10; i++)
    {
        cout << tablica[i] << ", ";
    }
}