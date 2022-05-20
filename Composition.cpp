#include <iostream>
using namespace std;

class Birthday
{
    public:
    Birthday(int d, int m, int y)
    : day(d), month(m), year(y) {}
    void printDate()
    {
        cout << day << "/" << month << "/" << year << endl;  
    }
    private:
    int day;
    int month;
    int year;
};
class Person
{
    public:
    Person(string n, Birthday b)
    : name(n), bd(b) {}
    void printInfo()
    {
        cout << name << endl;
        bd.printDate();
    }
    private:
    string name;
    Birthday bd;
};
int main()
{
    Birthday bd(15, 1, 2001);
    Person p("Van Duc", bd);
    p.printInfo();
    return 0;
}