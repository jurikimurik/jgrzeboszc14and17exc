#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Tssak {
        int serce;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////
struct Tkon : public Tssak {
        string nogi_konia[4];
};
//******************************************************************************************************
int main()
{
        Tkon hardy = {50, {"lewa przednia", "prawa przednia", "lewa tylna", "prawa tylna"}};

        cout << hardy.serce << ", ";
        for(auto & el : hardy.nogi_konia)
        {
            cout << el << ", ";
        }
}