#include <iostream>

using namespace std;

char charArray[] = { "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

char *charPointer = &charArray[1];

int main()
{
    while( *charPointer <= 'Z') // something is wrong here - go back here later to solve the problem
    {
        cout << *charPointer;
        charPointer = charPointer+4;
    }

//    for(int i=0; i<27; i++)
//    {
//        cout << charArray[i];
//    }
    return 0;
}
