#include <iostream>

using namespace std;

char *pointerObj; // pointer to char objects
char obj; // char object

int main()
{
    //cout << "Pointer *pointerObj is set currently on: " << *pointerObj << endl;

    pointerObj = &obj; // set pointer on the object

    cout << "Pointer *pointerObj is set currently on: " << *pointerObj << endl;
    cout << "Char obj is currently: " << obj << endl;

    *pointerObj = 'x';

    cout << "Pointer *pointerObj is set currently on: " << *pointerObj << endl;
    cout << "Char obj is currently: " << obj << endl;

    return 0;
}
