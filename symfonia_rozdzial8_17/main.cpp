#include <iostream>

using namespace std;

// definicja tablic
char tC[10];
long tL[10];

// definicja wska�nik�w do obiekt�w
char *wskC;
long *wskL;

int main()
{
    // nazwa tablicy jest jednocze�nie adresem jej pocz�tku (nie trzeba u�ywa� &)
    wskC = tC;
    wskL = tL;

    // przypisywanie przyk�adowych warto�ci do kom�rek
    tC[3] = '3';
    tC[4] = '4';
    tL[3] = 666;
    tL[4] = 667;

    // przesuwanie wska�nik�w o 4 miejsca
    wskC+=4;
    wskL+=4;

    // sprawdzenie czy wska�niki po przesuni�ciu pokazuj� na odpowiednie obiekty w tablicach
    cout << "tC[4]: " << tC[4] << endl;
    cout << "wskC: " << *wskC << endl;
    cout << "tL[4]: " << tL[4] << endl;
    cout << "wskL: " << *wskL << endl;
    return 0;
}
