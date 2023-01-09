#include <iostream>
using namespace std;
//***************************************************************************************************************************************
template <typename ... Args>
auto zbadaj_koniunkcje(Args ... args)
{
    return (args & ...);
}
//***************************************************************************************************************************************
int main()
{
    bool rezultat = zbadaj_koniunkcje(true, true, false, true, true, false);

    cout << "koniunkcja argumentow w pakiecie daje rezultat " << boolalpha << rezultat << " " << endl;
}