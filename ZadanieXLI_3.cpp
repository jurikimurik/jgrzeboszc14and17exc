#include <iostream>
#include <vector>
using namespace std;
//*******************************************************************************************************************
namespace std
{
    vector(initializer_list<const char *>)->vector<string>;
}
//*******************************************************************************************************************
int main()
{
    vector r{"dom", "ptak", "klon"};
    vector p{"zielony ", "barwny ", "piekny "};
    string zdanie;
    zdanie = p[0] + r[0] + ", " + p[1] + r[2];
    cout << zdanie;
}