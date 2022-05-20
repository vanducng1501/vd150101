#include <iostream>
using namespace std; 

template <class T>
class MyClass
{
    private:
    T first,  second;
    public:
    MyClass (T a, T b): first(a), second(b) {}
    T Bigger();
};
template <class T>
T MyClass <T>:: Bigger(){
    return (first > second ? first : second);
    }

int main()
{
    MyClass <int> obj(24, 30);
    cout << obj.Bigger() << endl;

    return 0;
}
