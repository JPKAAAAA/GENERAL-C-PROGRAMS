#include<iostream>
using namespace std;
int main()
{
    long a,b,d=0;
    system("cls");
    cout<<"Enter a number: ";
    cin>>a;
    while(a>0)
    {
        b=a%10;
        a=a/10;
        d=d*10+b;
    }
    cout<<"Reverse of given number: "<<d;
    return 0;
}
