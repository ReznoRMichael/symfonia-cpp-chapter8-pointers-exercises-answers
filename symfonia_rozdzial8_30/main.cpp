#include <iostream>

using namespace std;

// const object can be used to allocate arrays
const int asize = 10;

int arrayInt[asize] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int arrayIntP1[asize] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
int arrayIntP2[asize] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

/* ----------------------------- */
void add44_array(int[], int);
/* ----------------------------- */
void add44_pointer_v1(int*, int);
/* ----------------------------- */
void add44_pointer_v2(int*, int);
/* ----------------------------- */

int main()
{
    add44_array( arrayInt, asize );

    cout << endl << "arrayInt: ";
    for(int i=0; i < asize; i++)
        cout << arrayInt[i] << ",";

    add44_pointer_v1( arrayIntP1, asize );

    cout << endl << "arrayIntP1: ";
    for(int i=0; i < asize; i++)
        cout << arrayIntP1[i] << ",";

    add44_pointer_v2( arrayIntP2, asize );

    cout << endl << "arrayIntP2: ";
    for(int i=0; i < asize; i++)
        cout << arrayIntP2[i] << ",";

    return 0;
}

// adding function (array based)
/* ----------------------------- */
void add44_array(int arr[], int r)
{
    for(int i=0; i < r; i++)
    {
        arr[i] += 44; // use normal array for adding
    }
}
/* ----------------------------- */

// adding function (pointer based - v1 - optimized)
/* ----------------------------- */
void add44_pointer_v1(int *w, int r)
{
    for(int i=0; i < r; i++)
    {
        *(w++) += 44; // use pointer: the same as *w and w++; read something, and then move to the next object
    }
}
/* ----------------------------- */

// adding function (pointer based - v2 - array)
/* ----------------------------- */
void add44_pointer_v2(int *w, int r)
{
    for(int i=0; i < r; i++)
    {
        w[i] += 44; // use pointer as an array for adding
    }
}
/* ----------------------------- */
