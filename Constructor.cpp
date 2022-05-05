#include <iostream>
using namespace std;

class myClass
{
    public:
    myClass(string nm)
    {
        setName(nm);
    }
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
    myClass Obj("Van Dat");
    cout << Obj.setName1();

    return 0;

}