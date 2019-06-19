#include <iostream>

using namespace std;

int F( int (*w)() )
{
    /**
        | a function with a pointer to the function, that returns the result of one of those functions
    **/

    return w();
}

int main()
{
    // pointer definition that can point to the above function

    int (*wsk)( int() ) = &F;


    cout << "Hello world!" << endl;

    return 0;
}
