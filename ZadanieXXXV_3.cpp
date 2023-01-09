#include <iostream>
#include <bitset>
using namespace std;
//************************************************************************************************************************
template <typename... Args>
auto ile_jedynek_w_pakiecie(int nr_bitu, Args... args)
{
    return (bitset<sizeof(Args) * 8>(args).count() + ...);
}
//************************************************************************************************************************
int main()
{
    cout << ile_jedynek_w_pakiecie(0, 1, 3, 5, 8) << endl;
}