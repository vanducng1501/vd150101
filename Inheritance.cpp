#include <iostream>
using namespace std;

class Mother
{
    public:
    Mother() {};
    void printSomething()
    {
        cout << "Welcome" << endl;
    }
};

class Daughter : public Mother
{
    public:
    Daughter() {};
};
int main()
{
    Daughter d;
    d.printSomething();
    return 0;
}
