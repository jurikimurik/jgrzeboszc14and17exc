#include <iostream>
using namespace std;
//************************************************************************************************
template<typename T>
T mojmax(T pierwszy, T drugi)
{
    return (pierwszy > drugi) ? pierwszy : drugi;
}
//************************************************************************************************
template <>
[[deprecated("to juz niemodne")]] string mojmax(string pierwszy, string drugi)
{
    return (pierwszy.length() > drugi.length()) ? pierwszy : drugi;
}
//************************************************************************************************
int main()
{
    cout << mojmax(3, 9) << " , " << mojmax(5.99, 5.01) << endl;

    cout << mojmax(string("krotki"), string("bardzo_dlugi")) << endl;
}