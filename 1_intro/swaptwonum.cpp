#include <iostream>
using namespace std;

void swap_v1(int a, int b){
    //using temp variable
    int c=a;
    a=b;
    b=c;
    cout<<"1. Temp variable method"<<endl;
    cout<<"After awapping the values are..."<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;

}
void swap_v2(int a, int b){
    //using  addition and substraction
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"2. Using addition and subtraction"<<endl;
    cout<<"After awapping the values are..."<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;

}
void swap_v3(int a, int b){
    //using multiply and division
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"3. Using multiply and division"<<endl;
    cout<<"After awapping the values are..."<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;

}
void swap_v4(int a, int b){
    //using bitwise operator
    a = a ^ b;
	b = a ^ b;
	a = a ^ b;
    cout<<"4. Using bitwise operator"<<endl;
    cout<<"After awapping the values are..."<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;

}
void swap_v5(int a, int b){
    //with help of math using single line
    a = ( a + b ) - ( b = a );
    cout<<"5. help of math using single line"<<endl;
    cout<<"After awapping the values are..."<<endl;
    cout<<"a : "<<a<<endl<<"b : "<<b<<endl;

}

int main()
{
    int a,b;
    cout<<"Enter two numbers for swap: "<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    //calling swap function
    swap_v1(a,b);
    swap_v2(a,b);
    swap_v3(a,b);
    swap_v4(a,b);
    swap_v5(a,b);

    return 0;
}