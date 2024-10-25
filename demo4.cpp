#include <iostream>
#include <iomanip>
#include <ios>
using namespace std;
int main()
{
    cout << fixed << setw(10) << 3.1415926 << endl;
    cout << resetiosflags(ios::fixed) << setw(10) << 3.1415926 << endl;
    cout << hex << showbase << 100 << endl;
    cout << resetiosflags(ios::showbase) << 100 << endl;
    int i = 90;
    cout << i << endl;
    cout << dec << i << endl;
    cout << oct << i << endl;
    cout << hex << i << endl;
    cout << setiosflags(ios::uppercase);
    cout << hex << i << endl;
    cout << setbase(8) << i << endl;

    return 0;
}