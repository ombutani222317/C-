#include <iostream>
using namespace std;
int main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout<<"\t" << i;
        }
        cout<<endl;
    }
    return 0;
}