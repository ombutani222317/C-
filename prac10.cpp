#include<iostream>
using namespace std;
int main(){
    char arr[5]={'H','E','L','L','O'};
    for(int i=0;i<=4;i++){
            for(int j=0;j<=i;j++){
        cout<<arr[j];
    }
    cout<<endl;
    }
}