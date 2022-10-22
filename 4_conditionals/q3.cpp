//write a program to take input from user cost price and selling price nd calculate profit and loss
#include<iostream>
using namespace std;
int main(){
    int sp,cp;
    cout<<"Selling Price: ";
    cin>>sp;
    cout<<"Cost Price ";
    cin>>cp;
    if (sp>cp){
        cout<<"Profit: "<<sp-cp<<endl;
    }
    else
        cout<<"Loss: "<<sp-cp<<endl;
    return 0;
}