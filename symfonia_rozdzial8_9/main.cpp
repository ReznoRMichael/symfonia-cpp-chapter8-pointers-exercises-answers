#include <iostream>

using namespace std;

char obj = 'o'; //obiekt typu char
char *wch1; //wska�nik do obiekt�w typu char
char *wch2; //wska�nik do obiekt�w typu char
double *wd; //wska�nik do obiekt�w typu double

int main()
{
    wch1 = &obj; // set the pointer on obj
    wch2 = wch1; // set the pointer to the same what wch1 is set to

    wd = reinterpret_cast<double *>(wch2); // new way to set to another type
    //wd = (double *) wch2; // old way to set to another type

    cout << "obj: " << obj << endl;
    cout << "wch1: " << *wch1 << endl;
    cout << "wch2: " << *wch2 << endl;
    cout << "wd: " << *wd << endl;
    return 0;
}
