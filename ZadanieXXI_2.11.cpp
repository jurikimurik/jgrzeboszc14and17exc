#include <iostream>
using namespace std;
//************************************************************************************************
int main()
{
    double p = 5.55, q [[deprecated("Precz od zmiennej q!!!1!!!")]] = 66.6, r = 77.7;

    std::cout << "q = " << q << ", q*q = " << q * q << endl;
}