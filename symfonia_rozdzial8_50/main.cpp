#include <iostream>

using namespace std;

// set both array sizes
const int tsize = 37;

// original array with the text into which the prefix should be added
char text[tsize] = { "To this text I want to add a prefix." };

// function for adding a prefix to a given array
/* -------------------------------- */
char * prefixer(char *, const int);
/* -------------------------------- */

int main()
{
    for(int i=0; i<tsize; i++)
    {
        cout << text[i];
    }
    cout << endl;

    prefixer(text, tsize);

    for(int i=0; i<tsize; i++)
    {
        cout << text[i];
    }
    cout << endl;

    return 0;
}

/* -------------------------------- */
char * prefixer(char * tab, const int s)
{
    // duplicate array of the same size with the prefix message
    char warning[s] = { "Warning: " };

    // helper pointers for remembering the beginning addresses of both arrays
    char * beginning = tab;
    char * wbeginning = warning;

    // main pointers to work on
    char * wsktemp = tab;
    char * warningwsk = warning;

    // array size helper and character counter
    int tsize = s;
    int wcounter = 1;

    // move the pointer to the end of the prefix string and count the number of characters
    while(*(warningwsk++)) wcounter++;
    // move pointer one character back
    warningwsk--;

//    cout << "wcounter: " << wcounter << endl;
//    cout << "tsize: " << tsize << endl;
//    cout << "tsize-wcounter: " << tsize-wcounter << endl;

    for(int i=tsize-wcounter; i>=0; i--)
    {
        // copy one array to another
        *warningwsk = *wsktemp;

        // to the last 4 indexes of the array add dots
        if(i <= 3)
        {
            *warningwsk = '.';
        }

        // add a null character at the end of the string instead of the 4th dot
        if(i == 0) *warningwsk = 0;

        // increment both pointers for the next loop
        warningwsk++;
        wsktemp++;
    }

    // set the pointers again on the beginning addresses thanks to above helpers
    warningwsk = wbeginning;
    wsktemp = beginning;

    // copy the new array with the prefix back to the original one
    while( (*(wsktemp++) = *(warningwsk++)) );

    // set the original array pointer address again on the beginning
    wsktemp = beginning;

    // return the address of the updated array
    return wsktemp;
}
/* -------------------------------- */
