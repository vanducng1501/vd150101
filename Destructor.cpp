#include <iostream>
using namespace std;

class MyName 
{
    public:
    MyName();
    ~MyName();
};

    MyName::MyName()
    {
        cout << "Van Duc" << endl;
    }
    MyName::~MyName()
    {
        cout << "Xoa" << endl;
    }

int main()
{
    MyName Obj;

    return 0;
}