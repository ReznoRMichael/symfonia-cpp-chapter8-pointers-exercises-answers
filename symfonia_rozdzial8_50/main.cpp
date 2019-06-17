#include <iostream>

using namespace std;

const int tsize = 37;

char text[tsize] = { "To this text I want to add a prefix." };

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
    char * beginning = tab; // temp pointer for remembering the beginning address
    char * wsktemp = tab;
    char warning[s] = { "Warning: " };
    char * warningwsk = warning;
    char * wbeginning = warning; // temp pointer for remembering the beginning address
    int tsize = s;

    while(*(warningwsk++)); // move the pointer to the end of the string
    warningwsk--; // move pointer one character back

    // copy one string to another
    while( (*(warningwsk++) = *(wsktemp++)) )
    {
        tsize--;
        if(tsize < 10)
        {
            for(int i=0; i < 3; i++)
            {
                *warningwsk = '.';
                warningwsk++;
            }
            warningwsk = 0;
            wsktemp = 0;
            break;
        }
    }
    warningwsk = wbeginning;
    wsktemp = beginning;

    while( (*(wsktemp++) = *(warningwsk++)) );
    wsktemp = beginning;

    return wsktemp;
}
/* -------------------------------- */
