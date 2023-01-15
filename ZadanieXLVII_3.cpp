#include <iostream>
using namespace std;
//********************************************************************************************
#if __has_include("pierwszy.h")
    #include "pierwszy.h"
    #define WERSJA 1
#elif __has_include("drugi.h")
    #include "drugi.h"
    #define WERSJA 2
#else
    #error "Brak dobrych plikow!"
#endif
//********************************************************************************************
int main()
{
#if WERSJA == 1
    cout << "Korzystam z pliku pierwszy.h!" << endl;
#elif WERSJA == 2
    cout << "Korzystam z pliku drugi.h!" << endl;
#endif
}