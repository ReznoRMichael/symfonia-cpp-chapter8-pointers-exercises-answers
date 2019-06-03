#include <iostream>

using namespace std;

const double constDouble[3] = { 3.14, 1.42, 0.7 };

// function for showing all const array elements on the screen using a const pointer
/* ------------------------------------------ */
void showArray(const double*, int);
/* ------------------------------------------ */

int main()
{
    showArray(constDouble, 3);
    return 0;
}

/* ------------------------------------------ */
void showArray(const double *w, int n)
{
    cout << "const double Array: ";
    for(int i=0; i < n; i++, w++)
    {
        cout << *w;
        if(i < n-1) cout << ", ";
    }
}
/* ------------------------------------------ */
