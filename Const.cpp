#include <iostream>
using namespace std;

class MyClass
{
    public:
    void MyPrint() const;
};

    void MyClass::MyPrint() const
    {
        cout << "Hi!" << endl;
    }
int main()
{
    MyClass obj;
    obj.MyPrint();

    return 0;
}