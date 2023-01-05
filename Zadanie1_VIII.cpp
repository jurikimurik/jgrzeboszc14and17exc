#include <iostream>
using namespace std;
//*******************************************************************************************************************
template<char ... args>
class Tkacz
{
private:
    char znaki[sizeof...(args)+1] = { args... };
    int rozmiar_tablicy = sizeof...(args)+1;
public:
    Tkacz() {
        for(int i = 0; i < sizeof...(args)+1; i++)
        {
            cout << znaki[i] << endl;
        }
    }

    void tkaj_rzad(int odstep)
    {
        for(int c = 0; c < 2; c++) {
            int y = 0 + odstep;
            for (int i = 0; i < rozmiar_tablicy; i++, y++)
            {
                while (y >= rozmiar_tablicy)
                {
                    y -= rozmiar_tablicy;
                }
                cout << znaki[y];
            }
            y--;
            for (int i = 0; i < rozmiar_tablicy; i++, y--)
            {
                while (y < 0)
                {
                    y += rozmiar_tablicy;
                }
                cout << znaki[y];
            }
        }
        cout << endl;
    }

    void tkaj_modul(int ile = 14)
    {
        for(int i = 0; i < 14; i++)
        {
            tkaj_rzad(i);
        }
    }
};

//*******************************************************************************************************************
int main()
{
    Tkacz < ' ', '.', '.', '/', '\\', 'O', 'o', 'o', 'o', '.', '/', '\\', '/', '\\'> tkacz;

    tkacz.tkaj_modul();
}