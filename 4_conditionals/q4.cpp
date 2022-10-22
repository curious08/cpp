//write a program to print positive number enterd by user, if user enters negative number it is skipped.
#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a integer: ";
    cin>>num;
    if(num<0){
        cout<<"The number is negative and skipped"<<endl;
    }
    else
        cout<<num;
    return 0;
}