#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if(x%2==0)
        cout<<"Number is Even.";
    else
        cout<<"Number is Odd.";
    return 0;
}
