#include <iostream>
using namespace std;

class MyClass
{
    public:
    MyClass()
    {
        var = 0;
    }
    private:
    int var;

    friend void someFunc(MyClass &obj);
};
void someFunc(MyClass &obj)
{
    obj.var = 42;
    cout << obj.var << endl;
};
int main()
{
    MyClass obj;
    someFunc(obj);
    
    return 0;
}