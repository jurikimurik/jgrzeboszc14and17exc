#include <iostream>
#include <string>
using namespace std;
//***********************************************************************************************************************
template <typename T>
unsigned int czy_lubiany_typ = 0;
//***********************************************************************************************************************
template <>
signed int czy_lubiany_typ<const char *> = 1;
//***********************************************************************************************************************
template <>
signed int czy_lubiany_typ<std::string> = 1;
//***********************************************************************************************************************
// szablon funkcji do typow nadajacych sie (bo tekstowych)
template <typename T>
void fun_dwoista(T arg, signed int)
{
    cout << "\tF. dwoista wg. szablonu A dla typow lubianych" << endl;
    std::string tekst(arg);
    cout << "\tTekst: >" << tekst << "<, \n\ta litera nr [2] to " << arg[2] << "'" << endl;
}
//***********************************************************************************************************************
// szablon funkcji dla typow nie nadajacych sie (bo nie-tekstowych)
template <typename T>
void fun_dwoista(T arg, unsigned int)
{
    // nietekstowa wersja
    cout << "\tF. dwoista wg. szablonu B dla typow NIElubianych" << endl;
    T tmp = arg;
    cout << "\tWydruk nie-tekstowego arg = " << tmp << endl;
}
//***********************************************************************************************************************
template <typename T>
void funkcja_robocza(T arg) // szablon funkcji
{
    // najwazniejsza instrukcja
    fun_dwoista(arg, czy_lubiany_typ<T>);

    // ponizej to tylko kosmetyka-----------------
    cout << "Czy ten typ jest aprobowany? ";
    if (czy_lubiany_typ<T>)
        cout << "TAK" << endl;
    else
        cout << "NIE" << endl;
}
//***********************************************************************************************************************
int main()
{
    cout << "\nProba z liczba typu T ----> int \n";
    funkcja_robocza(5);

    cout << "\nProba z C-stringiem (typ const char *) \n";
    funkcja_robocza("abc");

    cout << "\nProba z obj. kl. std::string \n";
    string s("Nowości w C++14");
    funkcja_robocza(s);

    cout << "\nProba ze wskaznikiem int * \n";
    int roboczy = 4;
    int *wsk = &roboczy;
    funkcja_robocza(wsk);
}