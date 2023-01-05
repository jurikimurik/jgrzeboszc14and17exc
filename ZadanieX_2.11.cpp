#include <iostream>
#include <bitset>
using namespace std;
//********************************************************************
int main()
{
    int ktory{1};
    int liczba{203};

    auto czy_tam_jest_1 = [](int wartosc, int nr)
    {
        bitset<sizeof(wartosc) * 8> bit (wartosc);
        if(bit[nr] == true)
        {
            return true;
        } else {
            return false;
        }
    };

    cout << boolalpha << czy_tam_jest_1(liczba, ktory) << endl;
}