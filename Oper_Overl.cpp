#include <iostream>
using namespace std;

class MyClass
{
    public:
    int var;
    MyClass() {}
    MyClass(int a) : var(a) {}
    
    MyClass operator+ (MyClass obj)
    {
        MyClass obj1;
        obj1.var = var + obj.var;
        return obj1;
    }
};

int main()
{
    MyClass ob1(29), ob2(15);
    MyClass obj1 = ob1 +ob2;
    cout << obj1.var << endl;

    return 0;
}