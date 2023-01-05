#include <iostream>
#include <vector>
using namespace std;
//****************************************************************************************************************
vector<double> vmale;
vector<double> vsrednie;
vector<double> vduze;
//****************************************************************************************************************
template<typename T, typename... Tpakiet>
void sortowanie(T argument, Tpakiet ... arg) {
    if(argument < 10)
        vmale.push_back(argument);
    if(argument >= 10 && argument < 100)
        vsrednie.push_back(argument);
    if(argument >= 100)
        vduze.push_back(argument);

    
    if constexpr(sizeof...(arg) > 0)
    {
        sortowanie(arg...);
    } else {
        return;
    }

    /*vector<double> vmale;
    vector<double> vsrednie;
    vector<double> vduze;

    double tablica[1 + sizeof...(arg)] = {static_cast<double>(arg)...};
    for (unsigned int i = 0; i < sizeof...(arg) + 1; i++) {
        if(tablica[i] < 10)
            vmale.push_back(tablica[i]);
        if(tablica[i] >= 10 && tablica[i] < 100)
            vsrednie.push_back(tablica[i]);
        if(tablica[i] >= 100)
            vduze.push_back(tablica[i]);
    }

    cout << "Male: ";
    for(auto & licz: vmale)
    {
        cout << licz << ", ";
    }
    cout << "Srednie: ";
    for(auto & licz: vsrednie)
    {
        cout << licz << ", ";
    }
    cout << "Duze: ";
    for(auto & licz: vduze)
    {
        cout << licz << ", ";
    }*/
}
//****************************************************************************************************************
int main()
{
    //sortowanie(2, 5, 19, 234, 25, -1);
    sortowanie(55.5, 0, 1642, 20, 3.14, 4, 5000, 0.6);

    cout << "Male: ";
    for (auto &licz : vmale)
    {
        cout << licz << ", ";
    }
    cout << "Srednie: ";
    for (auto &licz : vsrednie)
    {
        cout << licz << ", ";
    }
    cout << "Duze: ";
    for (auto &licz : vduze)
    {
        cout << licz << ", ";
    }
}