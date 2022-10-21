//write a program to calculate sum of digit of a 3 digit number.
#include<iostream>
using namespace std;
int main(){
    int num =426,first,second,third;
    first=num/100;
    num=num%100;
    second=num/10;
    num=num%10;
    third=num;
    cout<<"Sum of three digit number is: "<<first+second+third<<endl;
    return 0;
}