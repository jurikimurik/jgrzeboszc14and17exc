#include <iostream>
using namespace std;
//*********************************************************************************************************************
string komunikat = "azot 80.7%, tlen 3.2%, dwutlenek wegla 6.2%, inne ok: 9.9%";
//*********************************************************************************************************************
int main()
{
    string szukane_slowo = "tlen";
    if(auto poz = komunikat.find(szukane_slowo); poz != string::npos)
    {
        string informacja = komunikat.substr(poz + szukane_slowo.length(), komunikat.find(poz, '%'));
        double liczba = stod(informacja);
        cout << "Stezenie poszukiwanego elementu: " << liczba << "%" << endl;
    } else {
        cout << "Brak danych na temat skladnika..." << endl;
    }
}