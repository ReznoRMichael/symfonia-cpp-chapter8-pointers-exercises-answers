#include <iostream>

using namespace std;

// three functions returning int result

int fun4()
{
    return 4;
}
int fun8()
{
    return 8;
}
int fun12()
{
    return 12;
}

// a function with a pointer to the function, that returns the result of one of those functions

int F( int (*w)() )
{
    return w();
}

int main()
{
    // call functions by their names
    cout << "fun4(): " << fun4() << endl;
    cout << "fun8(): " << fun8() << endl;
    cout << "fun12(): " << fun12() << endl;

    // call functions using a pointer to those functions and return their results
    cout << "F( fun4 ): " << F( fun4 ) << endl;
    cout << "F( fun8 ): " << F( fun8 ) << endl;
    cout << "F( fun12 ): " << F( fun12 ) << endl;

    return 0;
}
