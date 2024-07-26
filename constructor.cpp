#include <iostream>
using namespace std;

class hello
{
public:
    hello()
    {
        cout << "default constructor is call" << endl;
    }
    ~hello()
    {
        cout << " distructor is call" << endl;
    }
    hello(int a)
    {
        cout << "para constructor is call" << endl;
    }
    hello(char b)
    {
        cout << "para constructor is call" << endl;
    }
};
int main()
{
    class hello a, b(10), c('A');
    return 0;
}