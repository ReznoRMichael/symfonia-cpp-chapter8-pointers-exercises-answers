#include <iostream>

using namespace std;

int *wskObj;
int adres = 0xa2ff4;

int main()
{
    wskObj = reinterpret_cast<int*>(adres); // set the pointer to the address

    cout << "wskObj is set on the memory cell nr: " << reinterpret_cast<int>(wskObj) << endl; // read the value (memory address) from the pointer

    //wskObj = reinterpret_cast<int*>(0x0000); // set the pointer to the address
    wskObj = 0;

    cout << "wskObj is set on the memory cell nr: " << reinterpret_cast<int>(wskObj) << endl; // read the value (memory address) from the pointer

    return 0;
}
