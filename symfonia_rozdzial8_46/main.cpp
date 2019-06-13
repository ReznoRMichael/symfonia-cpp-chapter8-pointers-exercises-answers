#include <iostream>

using namespace std;

int obiekt = 100; // zwyk≥y obiekt
int *intw; // wskaünik do zwyk≥ych obiektÛw int
const int *Cintw; // wskaünik do sta≥ych obiektÛw int
int *const intCw = &obiekt; // sta≥y wskaünik do obiektÛw int
const int *const CintCw = &obiekt; // sta≥y wskaünik do sta≥ych obiektÛw int

int main()
{
    intw = Cintw; // error: invalid conversion from 'const int*' to 'int*' [-fpermissive] (wskaünik do zmiennych nie moøe siÍ zmieniÊ we wskaünik do sta≥ych)
    intw = const_cast<int *>(Cintw); // rzutowanie jest moøliwe
    intw = intCw; // moøliwe - wskaünik do zmiennej moøe pokazywaÊ na to samo, co sta≥y wskaünik
    intw = CintCw; // error: invalid conversion from 'const int*' to 'int*' [-fpermissive] (wskaünik do zmiennych nie moøe siÍ zmieniÊ we wskaünik do sta≥ych)
    intw = const_cast<int *>(CintCw); // rzutowanie jest moøliwe
    Cintw = intw; // moøliwe - wskaünik do sta≥ej moøe pokazywaÊ na to samo, co zwyk≥y wskaünik
    Cintw = intCw; // moøliwe - wskaünik do sta≥ej moøe pokazywaÊ na to samo, co sta≥y wskaünik
    Cintw = CintCw; // moøliwe - wskaünik do sta≥ej moøe pokazywaÊ na to samo, co sta≥y wskaünik do sta≥ej
    CintCw = intw; // error: assignment of read-only variable 'CintCw' (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)
    CintCw = const_cast<const int *const>(intw); // rzutowanie nie jest moøliwe (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)
    CintCw = Cintw; // error: assignment of read-only variable 'CintCw' (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)
    CintCw = const_cast<const int *const>(Cintw); // rzutowanie nie jest moøliwe (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)
    CintCw = intCw; // error: assignment of read-only variable 'CintCw' (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)
    CintCw = const_cast<const int *const>(intCw); // rzutowanie nie jest moøliwe (sta≥ego wskaünika nie moøna przestawiaÊ na nic innego)

    return 0;
}
