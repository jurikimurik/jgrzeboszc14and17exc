#include <iostream>
#include <iomanip>
using namespace std;
//****************************************************************************************************************************************************
int main()
{
    cout << "Daj liczbe: ";
    string liczba;
    cin >> liczba;

    while(liczba.find('\'') != string::npos){
        liczba.replace(liczba.find('\''), 1, "");
    }

    double real_liczba = stod(liczba);

    cout << setprecision(20) << real_liczba << endl;
    cout << hexfloat << real_liczba << endl;
}