#include <iostream>

using namespace std;

int tabInt[8] = { 0, 1, 2, 3, 4, 5, 6, 7 };

/* -------------------- */
void zeroing(int*);
/* -------------------- */

int main()
{
    cout << "Current tabInt[0] value: " << tabInt[0] << endl;
    cout << "Current tabInt[3] value: " << tabInt[3] << endl;
    cout << "Current tabInt[4] value: " << tabInt[4] << endl;
    cout << "Current tabInt[7] value: " << tabInt[7] << endl;

    // send the address of the array values as a pointer with & operator
    // this way the function will change the original values
    zeroing( &tabInt[0] );
    zeroing( &tabInt[3] );
    zeroing( &tabInt[4] );
    zeroing( &tabInt[7] );

    cout << "-------------------------------" << endl;

    cout << "After zeroing tabInt[0] value: " << tabInt[0] << endl;
    cout << "After zeroing tabInt[3] value: " << tabInt[3] << endl;
    cout << "After zeroing tabInt[4] value: " << tabInt[4] << endl;
    cout << "After zeroing tabInt[7] value: " << tabInt[7] << endl;
    return 0;
}

/* -------------------- */
void zeroing(int *w)
{
    *w = 0; // set the value that the address points to to zero (change original value)
}
/* -------------------- */
