#include <iostream>
using namespace std;
int main(){// Simple Bank Transaction System
    int menu;
    cout<<"\t\tSelect the following option to proceed the transcation";
    cout<<"\n1. Deposit\n"<<"2. Withdraw\n"<<"3. Check Balance\n"<<"4. Exit\n";
    cout<<"Enter a number: ";
    cin>>menu;
    switch (menu) {
    case 1:
    cout<<"Deposit\n";
    break;
    case 2:
    cout<<"Withdraw\n";
    break;
    case 3:
    cout<<"Check Balance\n";
    break;
    case 4:
    cout<<"Exit\n";
    break;

    default:
    cout<<"Invalid input\n";
        break;
    }
    return 0 ;
}