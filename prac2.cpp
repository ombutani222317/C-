#include <iostream>
using namespace std;

int main()
{
    int maths;
    int science;
    int english;
    int total, per;
    cout << "Enter a maths marks:";
    cin >> maths;
    cout << "Enter a science marks:";
    cin >> science;
    cout << "Enter a english marks:";
    cin >> english;
    total = maths + science + english;
    cout << "total marks:" << total << endl;
    per = (total * 100) / 300;
    cout << "persantage:" << per;
    return 0;
}