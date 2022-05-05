#include <iostream>
using namespace std;

class A
{
    public:
    A() { cout << "A constructor" << endl; }
    ~A(){ cout << "A destructor" << endl; }
}; 
class B : public A
{
    public:
    B() {  cout << "B constructor" << endl; }
    ~B() { cout << "B destrutor" << endl; }
};

int main()
{
    B m;
    return 0;

}