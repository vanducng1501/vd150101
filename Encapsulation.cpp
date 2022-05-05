#include <iostream>
using namespace std;

class myClass
{
    public:
    void setName(string n)
    {
        name = n;
    } 
    string setName1()
    {
        return name;
    }
    private:
        string name;
};

int main()
{
    myClass Obj;
    Obj.setName("Van Duc");
    cout << Obj.setName1();
    return 0;
}