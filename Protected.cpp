#include <iostream>
using namespace std;

class a {
   private:
    int priv = 1;

   protected:
    int prot = 2;

   public:
    int pub = 3;

    int getPVT() 
    {
        return priv;
    }
};

class b : public a 
{
   public:
    int getProt() 
    {
        return prot;
    }
};

int main() {
    b obj;
    cout << obj.getPVT() << endl;
    cout << obj.getProt() << endl;
    cout << obj.pub << endl;
    return 0;
}