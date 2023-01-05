#include <iostream>
#include <bitset>
using namespace std;
//********************************************************************************************
template<typename T>
void binarnie(T liczba)
{
    bitset<sizeof(T) * 8> Bliczba(liczba);

    bool wypisywac = false;
    for (int i = sizeof(liczba) * 8 - 1; i >= 0; i--)
    {
        if (Bliczba[i] == true)
        {
            wypisywac = true;
        }

        if (wypisywac)
        {
            cout << Bliczba[i];
        }
    }

    cout << endl;
}
//********************************************************************************************
int main()
{
    unsigned short int k {221};
    double licz{999999999};


    binarnie(k);
    binarnie(licz);
}