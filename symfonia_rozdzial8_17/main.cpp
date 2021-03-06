#include <iostream>

using namespace std;

// definicja tablic
char tC[10];
long tL[10];

// definicja wskaźników do obiektów
char *wskC;
long *wskL;

int main()
{
    // nazwa tablicy jest jednocześnie adresem jej początku (nie trzeba używać &)
    wskC = tC;
    wskL = tL;

    // przypisywanie przykładowych wartości do komórek
    tC[3] = '3';
    tC[4] = '4';
    tL[3] = 666;
    tL[4] = 667;

    // przesuwanie wskaźników o 4 miejsca
    wskC+=4;
    wskL+=4;

    // sprawdzenie czy wskaźniki po przesunięciu pokazują na odpowiednie obiekty w tablicach
    cout << "tC[4]: " << tC[4] << endl;
    cout << "wskC: " << *wskC << endl;
    cout << "tL[4]: " << tL[4] << endl;
    cout << "wskL: " << *wskL << endl;
    return 0;
}
