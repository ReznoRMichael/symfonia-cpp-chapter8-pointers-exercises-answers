#include <iostream>

using namespace std;

char cc = 'c';

void *wv = &cc; // set void pointer on the cc object

char *wc;

int main()
{
    wc = reinterpret_cast<char *>(wv); // set the char type pointer to the void type pointer

    cout << "char cc: " << cc << endl;
    cout << "void *wv: " << wv << endl; // void* is not a pointer-to-object type
    cout << "char *wc: " << *wc << endl;
    return 0;
}
