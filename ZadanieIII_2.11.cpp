#include <iostream>
#include <bitset>
#include <vector>
using namespace std;
//********************************************************************************************
template <typename T>
void binarnie(T liczba, vector<int> separator = {})
{
    bitset<sizeof(T) * 8> Bliczba(liczba);

    bool wypisywac = false;
    for (int i = sizeof(liczba) * 8-1; i >= 0; i--)
    {
        for(int &l : separator)
        {
            if(i - l == -1 && i != sizeof(liczba)*8-1 && wypisywac == true)
            {
                cout << "'";
            }
        }

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
    unsigned short int k{221};
    double licz{999999999};

    vector<int> separatory{0, 3, 6, 8};

    binarnie(k, separatory);
    binarnie(licz, separatory);
}