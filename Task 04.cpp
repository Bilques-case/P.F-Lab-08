#include <iostream>
using namespace std;
int main(){
    //grade converter
    char grade;
    cout<<"\t\tComments on grades";
    cout<<"\nEnter a grades (A, B, C, D or F): ";
    cin>>grade;
    switch (grade)
    {
    case 'A':
    cout<<"Excellent\n";
    break;
    case 'B':
    cout<<"Good\n";
    break;
    case 'C':
    cout<<"Average\n";
    break;
    case 'D':
    cout<<"Satisfactory\n";
    break;
    case 'F':
    cout<<"Fail\n";
    break;
    
    default:
    cout<<"Invalid input\n";
        break;
    }
    return 0 ;
}