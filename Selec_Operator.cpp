#include <iostream>
using namespace std;

class MyClass
{
    public:
    MyClass();
    void MyPrint();
};
MyClass::MyClass()
{}
void MyClass::MyPrint()
    {
        cout << "Welcome to my team!" << endl;
    }
int main()
{
    MyClass obj;
    MyClass *ptr = &obj;
    ptr -> MyPrint();

    return 0;
}

