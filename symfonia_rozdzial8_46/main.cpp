#include <iostream>

using namespace std;

int obiekt = 100; // zwyk�y obiekt
int *intw; // wska�nik do zwyk�ych obiekt�w int
const int *Cintw; // wska�nik do sta�ych obiekt�w int
int *const intCw = &obiekt; // sta�y wska�nik do obiekt�w int
const int *const CintCw = &obiekt; // sta�y wska�nik do sta�ych obiekt�w int

int main()
{
    intw = Cintw; // error: invalid conversion from 'const int*' to 'int*' [-fpermissive] (wska�nik do zmiennych nie mo�e si� zmieni� we wska�nik do sta�ych)
    intw = const_cast<int *>(Cintw); // rzutowanie jest mo�liwe
    intw = intCw; // mo�liwe - wska�nik do zmiennej mo�e pokazywa� na to samo, co sta�y wska�nik
    intw = CintCw; // error: invalid conversion from 'const int*' to 'int*' [-fpermissive] (wska�nik do zmiennych nie mo�e si� zmieni� we wska�nik do sta�ych)
    intw = const_cast<int *>(CintCw); // rzutowanie jest mo�liwe
    Cintw = intw; // mo�liwe - wska�nik do sta�ej mo�e pokazywa� na to samo, co zwyk�y wska�nik
    Cintw = intCw; // mo�liwe - wska�nik do sta�ej mo�e pokazywa� na to samo, co sta�y wska�nik
    Cintw = CintCw; // mo�liwe - wska�nik do sta�ej mo�e pokazywa� na to samo, co sta�y wska�nik do sta�ej
    CintCw = intw; // error: assignment of read-only variable 'CintCw' (sta�ego wska�nika nie mo�na przestawia� na nic innego)
    CintCw = const_cast<const int *const>(intw); // rzutowanie nie jest mo�liwe (sta�ego wska�nika nie mo�na przestawia� na nic innego)
    CintCw = Cintw; // error: assignment of read-only variable 'CintCw' (sta�ego wska�nika nie mo�na przestawia� na nic innego)
    CintCw = const_cast<const int *const>(Cintw); // rzutowanie nie jest mo�liwe (sta�ego wska�nika nie mo�na przestawia� na nic innego)
    CintCw = intCw; // error: assignment of read-only variable 'CintCw' (sta�ego wska�nika nie mo�na przestawia� na nic innego)
    CintCw = const_cast<const int *const>(intCw); // rzutowanie nie jest mo�liwe (sta�ego wska�nika nie mo�na przestawia� na nic innego)

    return 0;
}
