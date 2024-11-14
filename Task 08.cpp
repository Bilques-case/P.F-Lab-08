#include <iostream>
using namespace std;
int main(){// numbers to words
    int num;
    cout<<"\t\tNumbers in words";
    cout<<"\nEnter a number (1-9): ";
    cin>>num;
    switch (num) {
    case 1:
    cout<<"One\n";
    break;
    case 2:
    cout<<"Two\n";
    break;
    case 3:
    cout<<"Three\n";
    break;
    case 4:
    cout<<"Four\n";
    break;
    case 5:
    cout<<"Five\n";
    break;
    case 6:
    cout<<"Six\n";
    break;
    case 7:
    cout<<"Seven\n";
    break;
    case 8:
    cout<<"Eight\n";
    break;
    case9:
    cout<<"Nine\n";
    break;

    default:
    cout<<"Invalid input\n";
        break;
    }
    return 0 ;
}