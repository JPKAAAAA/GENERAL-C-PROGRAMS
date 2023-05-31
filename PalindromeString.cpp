#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    system("cls");
    char a[100],b[100];
    cout<<"Enter the string to check if it is a palindrome:\n ";
    cin>>a;
    cout<<"Entered String: "<<a<<endl;
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        cout<<"Entered string is a palindrome.\n";
    else
        cout<<"Entered string is not a palindrome.\n";
}
