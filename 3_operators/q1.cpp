//write a program to check wheather two numbers (entered by users) are equal or not?
#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"num1: ";
    cin>> num1;
    cout<<"num2: ";
    cin>>num2;
    cout<<(num1==num2?"Equal":"Not Equal");
}