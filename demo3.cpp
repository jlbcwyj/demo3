#include <iostream>
using namespace std;
namespace ns
{
    int time = 10;
    typedef struct Stu
    {
        char name[10];
        int age;
        int score;
    } Stu;
    namespace func
    {
        int Add(int a, int b, int c, int d)
        {
            return a + b * c / d;
        }
    }

}
int main()
{
    ns::Stu data = {0};
    int ret = ns::func::Add(1, 2, 3, 4);
    cout << ret << endl;
    return 0;
}