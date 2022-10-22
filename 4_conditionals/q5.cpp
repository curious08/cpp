//calculator using switch statement to perform addition, substraction, multiplication and division
#include<iostream>
using namespace std;
int main(){
    char opr;
    cout<<"Enter an operator(+,-,*,/): ";
    cin>>opr;
    int num1,num2;
    cout<<"Enter two numbers: "<<endl;
    cin>>num1;
    cin>>num2;
    switch (opr){
        case '+':
        cout<<num1<<opr<<num2<<" = "<<num1+num2<<endl;
        break;
        case '-':
        cout<<num1<<opr<<num2<<" = "<<num1-num2<<endl;
        break;
        case '*':
        cout<<num1<<opr<<num2<<" = "<<num1*num2<<endl;
        break;
        case '/':
        cout<<num1<<opr<<num2<<" = "<<num1/num2<<endl;
        break;
    default:
    cout<<"Please choose operator from the given option."<<endl;
    }
    return 0;
}