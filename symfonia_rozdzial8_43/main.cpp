#include <iostream>

using namespace std;

int main()
{
    int *const wa = new int; // wa is a static pointer to int object
    const int *wb = new int(8); // wb is a pointer to static int object
    int m = 4;

    //wa = 10;
    //error: assignment of read-only variable 'wa' / error: invalid conversion from 'int' to 'int*' [-fpermissive] (nie mo�na zmienia� adresu sta�ego wska�nika + nie u�yto reinterpret_cast)

    //wb = 10;
    //error: invalid conversion from 'int' to 'const int*' [-fpermissive] (nie u�yto reinterpret_cast)

    //*wa = 10;
    // przypisz warto�� adresowi wska�nika (warto�� sta�ego wska�nika mo�na przypisa� po inicjalizacji, nie mo�na tylko zmienia� adresu)

    //*wb = 10;
    //error: assignment of read-only location '* wb' (to jest obiekt sta�y, wi�c nie mo�na przypisa� mu innej warto�ci ni� pocz�tkowa 8)

    //wa = &m;
    //error: assignment of read-only variable 'wa' (nie mo�na zmienia� adresu sta�ego wska�nika)

    //wb = &m;
    // mo�na zmienia� adres normalnego wska�nika do obiekt�w const

    //delete wa;
    // mo�na usun��

    //delete wb;
    // mo�na usun��

    return 0;
}
