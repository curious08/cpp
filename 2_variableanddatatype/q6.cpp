//program to swap two numbers with help of third variable
#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Two numbers x and y for swap"<<endl;
    int x,y,temp;
    cout<<"x: ";
    cin>>x;
    cout<<"y: ";
    cin>>y;
    cout<<"Before swapping"<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    //swap logic
    temp=x;
    x=y;
    y=temp;
    cout<< "After swapping"<<endl;
    cout<<"x: "<<x<<" y: "<<y<<endl;
    return 0;
}