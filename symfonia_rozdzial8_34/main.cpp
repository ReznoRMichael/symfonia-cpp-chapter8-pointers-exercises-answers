#include <iostream>

using namespace std;

// doesn't have to be 'const' for 'new' operator (dynamic allocation)
int asize = 20;

// function that multiplies array elements of first two arrays, and saves them into the 3rd array
/* --------------------------------------- */
void arrMultiply(double*, double*, double*, int);
/* --------------------------------------- */
// function that creates a new array of dynamic size
/* --------------------------------------- */
double* arrayCreator(int);
/* --------------------------------------- */

int main()
{
    // define pointers to arrays and use function to create a new array
    double *arrDouble1 = arrayCreator(asize);
    double *arrDouble2 = arrayCreator(asize);
    double *arrDouble3 = arrayCreator(asize);

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

    // delete the arrays
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
double* arrayCreator(int s)
{
    double *w; // define a pointer
    w = new double[s]; // create a new array with 's' elements
    return w; // returns the array address
}
/* --------------------------------------- */
