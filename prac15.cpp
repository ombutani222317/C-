#include <iostream>
using namespace std;
int main()
{
    char string1[50] = {"om"};
    char string2[50] = {"Butani"};
    char string3[50];
    int k = 0;
    for (int i = 0; string1[i] != '\0'; i++, k++)
    {
        string3[k] = string1[i];
    }

    for (int j = 0; string2[j] != '\0'; j++, k++)
    {
        string3[k] = string2[j];
    }
}