#include <iostream>
#include <bitset>
using namespace std;
//****************************************************************************************************************************************
template <typename ... Args>
auto zbadaj_sume_bitowa(Args ... args)
{
    return (args | ...);
}
//****************************************************************************************************************************************
int main()
{
    int a = 4;
    int b = 1;
    int d = 3;

    int c = zbadaj_sume_bitowa(a, b, d);

        bitset<4> bity(c);

        cout << hex << c << endl;
        cout << bitset<sizeof(c) * 8>(c) << endl;
}