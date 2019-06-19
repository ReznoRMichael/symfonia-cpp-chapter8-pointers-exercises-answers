#include <iostream>

using namespace std;

void f(int m=4)
{
    //
}

int main()
{
    // error: invalid conversion from 'void (*)(int)' to 'void (*)()' [-fpermissive]
    void (*w)() = &f;

    cout << "Hello world!" << endl;
    return 0;
}
