/* ----------- Program imitating an industry robot ---------- */

#include <iostream>

using namespace std;


/* ----------- Variables and constants ---------- */

const int m = 6; // maximum amount of instructions in one queue
const int f = 6; // number of robot functions

bool ( *robotQueue[m] ) ( double ); // a pointer array for holding 'm' addresses of functions that return bool and accept double argument
double robotQueueDeg[m]; // a helper array for holding 'm' double values of degrees to send to the functions

/* ----------- Industry robot available functions ---------- */

bool rotateLeft( double );
bool rotateRight( double );
bool rotateUp( double );
bool rotateDown( double );
bool armForward( double );
bool armBackward( double );

/* --------------------------------------------------------- */

int main()
{
    // a helper pointer array for holding 'f' amount of robot functions that accept double argument
    bool ( *robotFunction[f] ) ( double ) = {
        &rotateLeft,
        &rotateRight,
        &rotateUp,
        &rotateDown,
        &armForward,
        &armBackward
    };

    int n = 0; // iterator for while loop
    int s; // selected function
    double d; // typed degree value

    cout << "----------Robot Command Queue-----------" << endl;
    cout << "\t 0 -> Rotate Left" << endl;
    cout << "\t 1 -> Rotate Right" << endl;
    cout << "\t 2 -> Rotate Up" << endl;
    cout << "\t 3 -> Rotate Down" << endl;
    cout << "\t 4 -> Arm Forward" << endl;
    cout << "\t 5 -> Arm Backward" << endl;
    cout << "\t 6 -> Execute Command Queue" << endl;
    cout << "\t 9 -> End Program" << endl;
    cout << endl;

    while (n < m)
    {
        cout << "Select your action (" << m-n << " left): ";
        cin >> s;

        if( s >= 0 && s < f )
        {
            cout << "Amount of degrees: ";
            cin >> d;
        }

        switch(s)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
                robotQueue[n] = robotFunction[s];
                robotQueueDeg[n] = d;
                n++;
                break;
            case 6:
                if(!n)
                {
                    cout << "The command queue is empty." << endl;
                    break;
                }
                else
                {
                    cout << endl << endl << endl;
                    for(int i=0; i<n; i++)
                    {
                        cout << "Command #" << i+1 << ": " << endl;
                        robotQueue[i]( robotQueueDeg[i] );
                    }
                    exit(1);
                }
                break;
            case 9:
                exit(1);
            default:
                break;
        }

    }

    cout << endl;
    cout << "The queue is full! Executing all commands..." << endl;
    cout << endl;

    for(int i=0; i<n; i++)
    {
        cout << "Command #" << i+1 << ": " << endl;
        robotQueue[i]( robotQueueDeg[i] );
    }

    return 0;
}

/* ----------- Industry robot available functions ---------- */

bool rotateLeft( double d )
{
    cout << "Rotating the arm left by " << d << " degrees..." << endl;
    return true;
}
bool rotateRight( double d )
{
    cout << "Rotating the arm right by " << d << " degrees..." << endl;
    return true;
}
bool rotateUp( double d )
{
    cout << "Rotating the arm up by " << d << " degrees..." << endl;
    return true;
}
bool rotateDown( double d )
{
    cout << "Rotating the arm down by " << d << " degrees..." << endl;
    return true;
}
bool armForward( double d )
{
    cout << "Putting the arm forward by " << d << " degrees..." << endl;
    return true;
}
bool armBackward( double d )
{
    cout << "Putting the arm backward by " << d << " degrees..." << endl;
    return true;
}
