//write a program to print absolute value of a number
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Num: ";
    cin>>num;
    if (num>0){
        cout<<"Absolute Value: "<<num<<endl;
    }
    else
        cout<<"Absolute value: "<<-(num)<<endl;
    return 0;
}