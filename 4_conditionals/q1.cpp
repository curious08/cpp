//take the value from user and check it is square or not
#include <iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"Length: ";
    cin>>length;
    cout<<"Breadth: ";
    cin>>breadth;
    (length==breadth)?cout<<"Square":cout<<"Rectangle";
    return 0;
    }