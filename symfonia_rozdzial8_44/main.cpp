#include <iostream>

using namespace std;

int main()
{
    int *wsk1;
    *wsk1 = 0; //warning: 'wsk1' is used uninitialized in this function [-Wuninitialized]

    int *wsk2 = 0; //warning: unused variable 'wsk2' [-Wunused-variable]

    return 0;
}
