#include <iostream>

using namespace std;

double tab[50];

double *wskA = &tab[10]; // set the pointer to the 10 element in the array
double *wskB = &tab[40]; // set the pointer to the 40 element in the array

int main()
{
    cout << "(wskB - wskA): " << (wskB - wskA) << endl; //  30
    cout << "(wskA - wskB): " << (wskA - wskB) << endl; // -30
    return 0;
}
