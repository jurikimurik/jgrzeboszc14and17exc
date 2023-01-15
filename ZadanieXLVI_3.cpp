#include <iostream>
#include <tuple>
using namespace std;
//**************************************************************************************************************
class Tzestaw
{
    private:
        string nazwa;
        double liczba;
        int16_t dwu_bajtowa_liczba;
    public:
        char znak;
        uint8_t jedno_bajtowa_liczba;
        double *wsk_double;

        Tzestaw(double * wsk) : nazwa("cos"), liczba(21), dwu_bajtowa_liczba(1203), znak('U'),
                            jedno_bajtowa_liczba(62), wsk_double(wsk) {}

        string getString() {
            return nazwa;
        }

        double getLiczba() {
            return liczba;
        }

        int16_t get16T() {
            return dwu_bajtowa_liczba;
        }

        //-------------------------------------------
        template<std::size_t Nr>
        decltype(auto) get()
        {
            if constexpr (Nr == 0)
                return (nazwa);
            else if constexpr (Nr == 1)
                return (liczba);
            else if constexpr (Nr == 2)
                return (dwu_bajtowa_liczba);
            else if constexpr (Nr == 3)
                return (jedno_bajtowa_liczba);
            else if constexpr (Nr == 4)
                return (wsk_double);
        }
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
template <>
struct std::tuple_size<Tzestaw>
{
        static const size_t value = 5;
};
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define RECZNIE true
#if RECZNIE == true
template <>
struct std::tuple_element<0, Tzestaw>
{
        using type = string;
};
//------------------------------------------
template <>
struct std::tuple_element<1, Tzestaw>
{
        using type = double;
};
//------------------------------------------
template <>
struct std::tuple_element<2, Tzestaw>
{
        using type = int16_t;
};
//------------------------------------------
template<>
struct std::tuple_element<3, Tzestaw>
{
        using type = uint8_t;
};
//------------------------------------------
template<>
struct std::tuple_element<4, Tzestaw>
{
        using type = double *;
};
#else
template <size_t Nr>
struct tuple_element<Nr, Tzestaw>
{
    using type = decltype(declval<Tzestaw>().get<Nr>());
};
#endif
//**************************************************************************************************************
double super_liczba = 9999999.99;
double nie_super_liczba = 1.0;
//**************************************************************************************************************
int main()
{
        Tzestaw test(&super_liczba);

        auto [nazwa, liczba, dwa_bajty, jeden_bajt, wskaznik] = test;
        nazwa += ".txt";
        liczba += 20;
        dwa_bajty *= 10;
        jeden_bajt -= 20;
        (*wskaznik++);

        cout << test.getString() << "\t" << nazwa << endl;
        cout << test.getLiczba() << "\t" << liczba << endl;
        cout << test.get16T() << "\t" << dwa_bajty << endl;
        cout << static_cast<int>(test.jedno_bajtowa_liczba) << "\t" << static_cast<int>(jeden_bajt) << endl;
        cout << *(test.wsk_double) << "\t" << *wskaznik << endl;

        cout << endl
             << endl;

        auto &[nazwa_ref, liczba_ref, dwa_bajty_ref, jeden_bajt_ref, wskaznik_ref] = test;
        nazwa_ref += ".txt";
        liczba_ref += 20;
        dwa_bajty_ref *= 10;
        jeden_bajt_ref -= 20;
        (*wskaznik_ref++);

        cout << test.getString() << "\t" << nazwa << endl;
        cout << test.getLiczba() << "\t" << liczba << endl;
        cout << test.get16T() << "\t" << dwa_bajty << endl;
        cout << static_cast<int>(test.jedno_bajtowa_liczba) << "\t" << static_cast<int>(jeden_bajt) << endl;
        cout << *(test.wsk_double) << "\t" << *wskaznik << endl;
}