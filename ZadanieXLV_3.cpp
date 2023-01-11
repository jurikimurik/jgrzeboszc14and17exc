#include <iostream>
#include <vector>
using namespace std;
//************************************************************************************************
struct K
{

    K(int l1, double l2, string str) : liczba_i(l1), liczba_d(l2), nazwa(str) {}

    int liczba_i;
    double liczba_d;
    string nazwa;
};
//************************************************************************************************
vector<K> wekt = {
    {1, 2.3, "Ktos"},
    {292, 12.345, "MAKUMBA"}};
//************************************************************************************************
int main()
{
    for(auto & [liczba_int, liczba_doub, wielka_nazwa] : wekt) {
        cout << "int = " << liczba_int << ", double = " << liczba_doub << ", nazwa = " << wielka_nazwa << endl;

        liczba_int += 100;
        liczba_doub += 12.32;
        wielka_nazwa += "AAA";
    }

    for(auto [liczba_int, liczba_double, wielka_nazwa] : wekt) {
        cout << "int = " << liczba_int << ", double = " << liczba_double << ", nazwa = " << wielka_nazwa << endl;
    }
}