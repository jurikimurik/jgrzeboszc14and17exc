#include <iostream>
#include <bitset>
using namespace std;
//********************************************************************************************
void binarnie(short int liczba)
{
    bitset<sizeof(liczba)*8> Bliczba (liczba);
   
   bool wypisywac = false;
   for(int i = sizeof(liczba)*8-1; i >= 0; i--)
   {
        if(Bliczba[i] == true)
        {
           wypisywac = true;
        }

        if(wypisywac)
        {
            cout << Bliczba[i];
        }
   }

   cout << endl;
}
//********************************************************************************************
int main()
{
   short int k {220};
   binarnie(k);
}