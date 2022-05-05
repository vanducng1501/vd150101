#include <iostream>
using namespace std;

class MyMember
{
    private:
    int var;
    const int constVar;
    public:
    MyMember(int a, int b);
};
MyMember::MyMember(int a, int b)
: var(a), constVar(b)
{
    cout << var << endl;
    cout << constVar << endl;
}
int main ()
{
    MyMember obj(15, 29);

    return 0;
}