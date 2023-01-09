#include <iostream>
#include <bitset>
using namespace std;
//************************************************************************************************************************
template <typename ... Args>
auto zbadaj_bity_nr(int nr_bitu, Args ... args)
{
    return (bitset<sizeof(Args) * 8>(args)[nr_bitu] + ...);
}
//************************************************************************************************************************
int main()
{
    cout << zbadaj_bity_nr(0, 1, 3, 5, 4) << endl;
}