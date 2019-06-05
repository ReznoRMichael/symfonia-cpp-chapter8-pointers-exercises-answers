#include <iostream>

using namespace std;

int main()
{
    int *const wa = new int; // wa is a static pointer to int object
    const int *wb = new int(8); // wb is a pointer to static int object
    int m = 4;

    //wa = 10;
    //error: assignment of read-only variable 'wa' / error: invalid conversion from 'int' to 'int*' [-fpermissive] (nie mo¿na zmieniaæ adresu sta³ego wskaŸnika + nie u¿yto reinterpret_cast)

    //wb = 10;
    //error: invalid conversion from 'int' to 'const int*' [-fpermissive] (nie u¿yto reinterpret_cast)

    //*wa = 10;
    // przypisz wartoœæ adresowi wskaŸnika (wartoœæ sta³ego wskaŸnika mo¿na przypisaæ po inicjalizacji, nie mo¿na tylko zmieniaæ adresu)

    //*wb = 10;
    //error: assignment of read-only location '* wb' (to jest obiekt sta³y, wiêc nie mo¿na przypisaæ mu innej wartoœci ni¿ pocz¹tkowa 8)

    //wa = &m;
    //error: assignment of read-only variable 'wa' (nie mo¿na zmieniaæ adresu sta³ego wskaŸnika)

    //wb = &m;
    // mo¿na zmieniaæ adres normalnego wskaŸnika do obiektów const

    //delete wa;
    // mo¿na usun¹æ

    //delete wb;
    // mo¿na usun¹æ

    return 0;
}
