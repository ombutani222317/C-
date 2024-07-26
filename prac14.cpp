#include <iostream>
using namespace std;
void rvnumber()
{
    int num, rvnumber = 0, reminder;
    cout << "Enter the number:";
    cin >> num;
    while (num != 0)
    {
        reminder = num % 10;
        rvnumber = rvnumber * 10 + reminder;
        num /= 10;
    }
    cout<<"reversed number:"<<rvnumber;
}
int main()
{
    rvnumber();
}