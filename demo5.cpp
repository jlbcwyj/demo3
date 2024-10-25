#include <iostream>
using namespace std;
namespace space_a
{
    int a1 = 1;
    int a2 = 2;
    namespace space_b
    {
        int b1 = 10;
        int b2 = 20;
        int b3 = 30;
    }
    namespace space_3
    {
        int c1 = 100;
        int c2 = 200;
    }
}
using namespace space_a;
using namespace space_a::space_b;
using namespace space_a::space_3;
int main()
{
    cout << a1 + b1 + c1 << endl;
    printf("%d\n", a1);
    printf("%d\n", b1);
    printf("%d\n", c1);
    return 0;
}
