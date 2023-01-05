#include <iostream>
using namespace std;
//************************************************************************************************
template<typename... Kl_podstawowa>
class Tpostac_gry : public Kl_podstawowa...
{
    string imie;
    public:
    Tpostac_gry(string im, Kl_podstawowa... podst) : Kl_podstawowa ( podst )..., imie(im) {
        cout << "Jestem gotową postacią: " << imie << endl;
    }
    string jego_imie() { return imie; }
};
//************************************************************************************************
template<>
class Tpostac_gry<>
{
    public:
        string imie;
        Tpostac_gry(const char * im) : imie(im)
        {
        cout << "Jestem gotowa postacia " << imie << " BEZ JAKIEJKOLWIEK KLASY! " << endl;
        }

       
};
//************************************************************************************************
class Twalczacy_mieczem
{
    public:
        int dlugosc_miecza;

        Twalczacy_mieczem(int dlugosc) : dlugosc_miecza(dlugosc)
        {
        cout << "Walcze mieczem!" << endl;
        }

        virtual string jego_imie() { return ""; }
};
//************************************************************************************************
class Tjezdziec_smokow
{
    public:
        int liczba_skrzydel;

        Tjezdziec_smokow(int liczba) : liczba_skrzydel(liczba)
        {
        cout << "Jezdze smokiem!" << endl;
        }

        virtual string jego_imie() { return ""; }
};
//************************************************************************************************
class Tznajacy_magie
{
    public:
        int ilosc_zaklec;
        int stopien;

        Tznajacy_magie(int ilosc, int stop) : ilosc_zaklec(ilosc), stopien(stop)
        {
        cout << "Znam magie!" << endl;
        }

        virtual string jego_imie() { return ""; }
};
//************************************************************************************************
void zaklete_zamczysko(Tznajacy_magie *p)
{
        cout << p->jego_imie() << "! Ide zdejmowac czary! Znam: " << p->ilosc_zaklec << ", oraz jestem " 
            << p->stopien << " stopnia!" << endl;
}
//************************************************************************************************
void pokonaj_przepasc(Tjezdziec_smokow *p) {
        cout << p->jego_imie() << "! Lece na smoku! Moj ma " << p->liczba_skrzydel << " skrzydel!" << endl;
}
//************************************************************************************************
void bitwa_rycerska(Twalczacy_mieczem *p) {
        cout << p->jego_imie() << "! Walcze mieczem swoim o dlugosci " << p->dlugosc_miecza
             << "! Pokonam kazdego!" << endl;
}
//************************************************************************************************
int main()
{
        Tpostac_gry<Tznajacy_magie> garold("Garold", {2, 2});
        Tpostac_gry<Tjezdziec_smokow> monseur("Monseur", 2);
        Tpostac_gry<Twalczacy_mieczem> daniel("Daniel", 3);
        Tpostac_gry<Tjezdziec_smokow, Twalczacy_mieczem> Rycerz("Rycerz", 2, 10);
        Tpostac_gry<Twalczacy_mieczem, Tjezdziec_smokow, Tznajacy_magie> Super("Super", 10, 2, {25, 4});
        Tpostac_gry<Tznajacy_magie, Twalczacy_mieczem> Merlin("Merlin", {10, 2}, 9);

        zaklete_zamczysko(&garold);
        zaklete_zamczysko(&Super);
        zaklete_zamczysko(&Merlin);

        pokonaj_przepasc(&monseur);
        pokonaj_przepasc(&Rycerz);
        pokonaj_przepasc(&Super);

        bitwa_rycerska(&daniel);
        bitwa_rycerska(&Super);
        bitwa_rycerska(&Merlin);
}