/* ----------- Program imitating an industry robot ---------- */

#include <iostream>

using namespace std;


/* ----------- Variables and constants ---------- */

const int m = 20; // maximum amount of instructions in one queue

bool ( *robotQueue[m] ) (); // a pointer array for holding 'm' addresses of functions that return bool

/* ----------- Industry robot available functions ---------- */

bool rotateLeft();
bool rotateRight();
bool rotateUp();
bool rotateDown();
bool armForward();
bool armBackward();

/* --------------------------------------------------------- */

int main()
{
    int n = 0;

    int s;

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
        cout << "Select your action (" << m-n << " available): " ;
        cin >> s;

        switch(s)
        {
            case 0:
                robotQueue[n] = &rotateLeft;
                n++;
                break;
            case 1:
                robotQueue[n] = &rotateRight;
                n++;
                break;
            case 2:
                robotQueue[n] = &rotateUp;
                n++;
                break;
            case 3:
                robotQueue[n] = &rotateDown;
                n++;
                break;
            case 4:
                robotQueue[n] = &armForward;
                n++;
                break;
            case 5:
                robotQueue[n] = &armBackward;
                n++;
                break;
            case 6:
                cout << endl << endl << endl;
                for(int i=0; i<n; i++)
                {
                    cout << "Command #" << i+1 << ": " << robotQueue[i]();
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
        robotQueue[i]();
    }

    return 0;
}

/* ----------- Industry robot available functions ---------- */

bool rotateLeft()
{
    cout << "Rotating the arm left..." << endl;
    return true;
}
bool rotateRight()
{
    cout << "Rotating the arm right..." << endl;
    return true;
}
bool rotateUp()
{
    cout << "Rotating the arm up..." << endl;
    return true;
}
bool rotateDown()
{
    cout << "Rotating the arm down..." << endl;
    return true;
}
bool armForward()
{
    cout << "Putting the arm forward..." << endl;
    return true;
}
bool armBackward()
{
    cout << "Putting the arm backward..." << endl;
    return true;
}
