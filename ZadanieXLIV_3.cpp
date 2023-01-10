#include <iostream>
using namespace std;
//****************************************************************************************************
char menu()
{
    cout << "\n\n\n";

    cout << "P: PLAY\n";
    cout << "S: STOP\n";
    cout << "F: FORWARD\n";
    cout << "B: BACKWARD\n";
    cout << "X: EXIT\n";

    char znak;
    cin >> znak;
    return znak;
}
//****************************************************************************************************
int main()
{
    while(true)
    {
        switch (char znak = menu(); znak)
        {
            case 'P':
                cout << "PLAY" << endl;
                break;
            case 'S':
                cout << "STOP" << endl;
                break;
            case 'F':
                cout << "FORWARD" << endl;
                break;
            case 'B':
                cout << "BACKWARD" << endl;
                break;
            case 'X':
                cout << "EXIT" << endl;
                exit(0);
            }
    }
}