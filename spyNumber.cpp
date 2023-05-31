#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,prod=1,d;
    cout<<"Enter a number: ";
    cin>>n;
    int num=n;
    while(n>0)
    {
        d=n%10;
        sum=sum+d;
        prod=prod*d;
        n=n/10;
    }
    if(sum==prod)
        cout<<num<<" is a Spy number.";
    else
        cout<<num<<" is not a Spy number.";
    return 0;
}
