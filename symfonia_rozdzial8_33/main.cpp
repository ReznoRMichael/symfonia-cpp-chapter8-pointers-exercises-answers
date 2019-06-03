#include <iostream>

using namespace std;

// doesn't have to be const for new operator (dynamic allocation)
int asize = 20;

/* --------------------------------------- */
void arrMultiply(double*, double*, double*, int);
/* --------------------------------------- */

int main()
{
    // define pointers to arrays and dynamically allocate the size of arrays
    double *arrDouble1 = new double[asize];
    double *arrDouble2 = new double[asize];
    double *arrDouble3 = new double[asize];

    double n = 1.0;

    for(int i=0; i < asize; i++, n++)
    {
        arrDouble1[i] = n * 2.0;
        arrDouble2[i] = n * 8.0;
    }

    arrMultiply(arrDouble1, arrDouble2, arrDouble3, asize);

    cout << "arrDouble1: ";
    for(int i=0; i < asize; i++)
    {
        cout << arrDouble1[i];
        if(i < asize-1) cout << ",";
    }
    cout << endl << endl;

    cout << "arrDouble2: ";
    for(int i=0; i < asize; i++)
    {
        cout << arrDouble2[i];
        if(i < asize-1) cout << ",";
    }
    cout << endl << endl;

    cout << "arrDouble3: ";
    for(int i=0; i < asize; i++)
    {
        cout << arrDouble3[i];
        if(i < asize-1) cout << ",";
    }

    delete [] arrDouble1;
    delete [] arrDouble2;
    delete [] arrDouble3;

    return 0;
}

/* --------------------------------------- */
void arrMultiply(double *arr1, double *arr2, double *arr3, int s)
{
    for(int i=0; i < s; i++)
    {
        arr3[i] = arr1[i] * arr2[i];
    }
}
/* --------------------------------------- */
