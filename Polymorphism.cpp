#include <iostream>
using namespace std;

class soccer
{
    protected:
    int ball;
    public:
    void controlTheBall(int b) { ball = b; }
};
class ManUnited : public soccer
{
    public:
    void kich() {cout << "ManUnited kiem soat bong: "<< ball << endl; }
};
class ManCity : public soccer
{
    public:
    void kich() {cout << "ManCity kiem soat bong: "<< ball << endl; }
};
int main ()
{
    ManUnited mu;
    ManCity mc;
    soccer *ptr1 = &mu;
    soccer *ptr2 = &mc;
    ptr1 -> controlTheBall(60);
    ptr2 -> controlTheBall(40);
    mu.kich();
    mc.kich();
    return 0;
}
