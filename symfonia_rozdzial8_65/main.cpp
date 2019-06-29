#include <iostream>
#include <windows.h>

using namespace std;

int main( int argc, char * argv[] )
{
    cout << "The program's .exe name is: " << argv[0] << endl;

    for(int i=0; i < argc; i++)
    {
        cout << "This program's #" << i+1 << " command-line parameter: " << argv[i] << endl;
    }

    system("pause");

    return 0;
}
