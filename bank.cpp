
#include <iostream>
using namespace std;

class account
{
    int acno;
    char name[50];
    int deposit;
    int balance;
    char type;
    int withdraw;

public:
    void create_account();
    void show_account();
    void deposit_money();
    void withdraw_money();0
};

void account::create_account()
{
    cout << "\n\t\t\tEnter the Account No. : ";
    cin >> acno;
    cout << "\t\t\tPlease Enter the Name of the Account holder Here : ";
    cin >> name;
    cout << "\t\t\tEnter Type of the Account (C/S) : ";
    cin >> type;
    cout << "\t\t\tEnter The Deposite amount : ";
    cin >> deposit;
    balance = deposit;
    cout << "\n\t\t\tAccount Created..";
}

void account::show_account()
{
    cout << "\n\t\t\tAccount No. : " << acno;
    cout << "\n\t\t\tAccount Holder Name : ";
    cout << name;
    cout << "\n\t\t\tType of Account : " << type;
    cout << "\n\t\t\tBalance amount : " << balance;
}

void account::deposit_money()
{
    cout << "\n\t\t\tEnter the Account No. : ";
    cin >> acno;

    cout << "\t\t\tEnter the Deposite Amount : ";
    cin >> deposit;
    balance += deposit;
    cout << "\n\t\t\tDeposite Successfully...";
}

void account::withdraw_money()
{
    cout << "\n\t\t\tEnter the Account No. : ";
    cin >> acno;
    cout << "\t\t\tEnter the Withdraw Amount : ";
    cin >> withdraw;
    if (balance < withdraw)
    {
        cout << "\n\t\t\tInsufficient Balance...";
    }
    else
    {
        balance -= withdraw;
        cout << "\n\t\t\tWithdraw Successfully...";
    }
}

int main()
{
    int ch;
a:
    cout << "\n\t\t\t1.Create Account\n\t\t\t2.Show Account";
    cout << "\n\t\t\t3.Deposite Money";
    cout << "\n\t\t\t4.Withdraw Money\n\t\t\t\n************************************************************************************************";
    cout << "\nEnter the action you want to perform:";
    cin >> ch;
    account user1;
    switch (ch)
    {
    case 1:
        user1.create_account();
        goto a;
    case 2:
        user1.show_account();
        goto a;
    case 3:
        user1.deposit_money();
        goto a;
    case 4:
        user1.withdraw_money();
        goto a;
    case 5:
        cout << "\n\t\t\tThank you for using our service\n\t\t\tHave a nice day";

        goto a;
    default:
        cout << "\n\t\t\tInvalid choice\n\t\t\tPlease Try again";
        goto a;
    }

    return 0;
}