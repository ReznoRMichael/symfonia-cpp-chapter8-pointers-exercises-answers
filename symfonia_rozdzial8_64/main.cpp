/* ----------- Program imitating an industry robot ---------- */

#include <iostream>

using namespace std;


/* ----------- Variables and constants ---------- */

const int m = 2; // maximum amount of instructions in one queue

bool ( *robotQueue[m] ) ( double ); // a pointer array for holding 'm' addresses of functions that return bool and accept double argument
double robotQueueDeg[m]; // an array for holding 'm' double values of degrees to send to the functions

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
    int n = 0;

    int s;
    double d;

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
        cout << "Select your action (" << m-n << " left): " ;
        cin >> s;
        cout << "Amount of degrees: " ;
        cin >> d;

        switch(s)
        {
            case 0:
                robotQueue[n] = &rotateLeft;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 1:
                robotQueue[n] = &rotateRight;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 2:
                robotQueue[n] = &rotateUp;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 3:
                robotQueue[n] = &rotateDown;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 4:
                robotQueue[n] = &armForward;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 5:
                robotQueue[n] = &armBackward;
                robotQueueDeg[n] = d;
                n++;
                break;
            case 6:
                cout << endl << endl << endl;
                for(int i=0; i<n; i++)
                {
                    cout << "Command #" << i+1 << ": " << robotQueue[i]( robotQueueDeg[i] );
                }
                exit(1);
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
