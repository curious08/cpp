//write a program to calculate the sum of the first and second last digit of a 5 digit number
#include<iostream>
using namespace std;
int main(){
    //main idea here deriving the logic
    int n=12345,first,second,third,fourth,fifth;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    n=n%10;
    fifth=n;
    /*
    cout<<first<<endl;
    cout<<second<<endl;
    cout<<third<<endl;
    cout<<fourth<<endl;
    cout<<fifth<<endl;
    */
   cout<<"Sum of first and second last digit: "<<first+fourth<<endl;
    return 0;
}