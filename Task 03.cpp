#include <iostream>
using namespace std;
int main(){//"Wheather alphabets are vowels
    char alpha;
    cout<<"\t\tWheather alphabets are vowels or not";
    cout<<"\nEnter alphabet: ";
    cin>>alpha;
    switch (alpha)
    {
    case 'a':
    cout<<"a is a vowel lower case letter\n";
    break;
    case 'e':
    cout<<"e is a vowel lower case letter\n";
    break;
    case 'i':
    cout<<"i is a vowel lower case letter\n";
    break;
    case 'o':
    cout<<"o is a vowel lower case letter\n";
    break;
    case 'u':
    cout<<"u is a vowel lower case letter\n";
    break;
    case 'A':///upper case 
    cout<<"A is a vowel upper case letter\n";
    break;
    case 'E':
    cout<<"E is a vowel upper case letter\n";
    break;
    case 'I':
    cout<<"I is a vowel upper case letter\n";
    break;
    case 'O':
    cout<<"O is a vowel upper case letter\n";
    break;
    case 'U':
    cout<<"U is a vowel upper case letter\n";
    break;
    default:
    cout<<"Invalid input\n";
        break;
    }
    return 0 ;
}