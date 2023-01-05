#include <iostream>
//************************************************************************************************
int main()
{
    [[deprecated("Co to w jaskini sie urodziles?! Korzystaj z double!")]]
    typedef double napiecie_t;
    using napiecie_u [[deprecated("Jakis kijowy typ wymyslilem. Dawaj innego uzywaj!")]] = double;

    napiecie_t pierwsza{22.3};
    napiecie_u druga{93.23};

    std::cout << pierwsza << " , " << druga << std::endl;
}