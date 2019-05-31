#include <iostream>

using namespace std;

unsigned long kalibracja[10];

unsigned long *wskKalibracja;

int main()
{
    wskKalibracja = kalibracja; // array name is the address of the array in memory (no & needed)

    cout << "Address of the tab[] array in memory: " << &kalibracja << endl;
    cout << "Address of the tab[0] array in memory: " << &kalibracja[0] << endl;
    cout << "Address of the pointer-to-array in memory: " << &wskKalibracja << endl;
    cout << "------------------------------------------" << endl;

    //wskT++;
    wskKalibracja = &kalibracja[0];

    cout << "Address of the tab[] array in memory: " << &kalibracja << endl;
    cout << "Address of the tab[0] array in memory: " << &kalibracja[0] << endl;
    cout << "Address of the tab[1] array in memory: " << &kalibracja[1] << endl;
    cout << "Address of the pointer-to-array in memory: " << &wskKalibracja << endl;

    return 0;
}
