#include <iostream>
using namespace std;
//take length and breadth of rectangle and print it's area
int main(){
    //declaring integer x and y
    int length,breadth;
    //taking input
    cout<<"Enter length and breadth values of rectangle"<<endl;
    cout<<"length: ";
    cin>>length;
    cout<<"breadth: ";
    cin>>breadth;
    cout<<"Area of rectangle whoes length "<<length<<" & breadth "<<breadth<<" is : "<<length*breadth;
    return 0;
}