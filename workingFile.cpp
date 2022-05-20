#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream MyFile;
    MyFile.open("test.txt");
    MyFile << "Hello C++ \n";
    MyFile.close();
}