
#include <iostream>
using namespace std;
namespace ns
{
    int time = 100;
}
namespace na
{
    double time1 = 13.14f;
}
namespace nt
{
    char time2 = 't';
}
int main()
{

    cout << "hello c++" << endl;
    cout << "time:" << ns::time << endl;
    cout << "time1:" << ns::time + na::time1 + nt::time2 << endl;

    return 0;
}
