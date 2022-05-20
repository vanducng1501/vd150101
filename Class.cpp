#include <iostream>
using namespace std;

class myClass
{
    public: 
    void loiChao() 
    {
        cout << "Xin chao!" << endl;
    }
};

int main()
{
    myClass Obj;
    Obj.loiChao();

    return 0;
}