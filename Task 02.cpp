#include <iostream>
using namespace std;
int main(){
    //simple calculator
    float a,b;
    char operater;
    cout<<"Enter the first numbers for operation: ";
    cin>>a;
    cout<<"Enter the second numbers for operation: ";
    cin>>b;
    cout<<"\nEnter a operater (+,-,*,/): ";
    cin>>operater;
    switch (operater)
    {
    case '+':
    cout<<a+b<<"\n";
    break;
    case '-':
    cout<<a-b<<"\n";
    break;
    case '*':
    cout<<a*b<<"\n";
    break;
    case '/':
    cout<<a/b<<"\n";
    break;
    
    default:
    cout<<"Invalid input\n";
        break;
    }
    return 0 ;
}