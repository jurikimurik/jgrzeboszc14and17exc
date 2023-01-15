#include <iostream>
//********************************************************************************
namespace galaktyka::uklad_sloneczny::ziemia::europa::polska::moja_miejscowosc {
    int czytelnik = 0;
}
//********************************************************************************
int main()
{
    galaktyka::uklad_sloneczny::ziemia::europa::polska::moja_miejscowosc::czytelnik = 1;

    using namespace galaktyka::uklad_sloneczny;
    ziemia::europa::polska::moja_miejscowosc::czytelnik = 2;

    namespace kraj = galaktyka::uklad_sloneczny::ziemia::europa::polska;
    using namespace kraj::moja_miejscowosc;
    czytelnik = 9;

    std::cout << czytelnik << std::endl;
}