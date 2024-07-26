#include <iostream>
using namespace std;
int main()
{
int t=1;
char name[50];
gets(name);
for(int i=1;name[i]!='\0';i++){
    t++;
}
cout<<"character total:"<<t;
    return 0;
}