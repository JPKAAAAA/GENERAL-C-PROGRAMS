#include<iostream>
using namespace std;
int main()
{
    int up,lw,n,i,sum=0,prod=1,d;
    cout<<"Enter the Starting number(lower limit): ";
    cin>>lw;
    cout<<"Enter the Ending number(upper limit): ";
    cin>>up;
    cout<<"\nList of Spy numbers between "<<lw<<" - "<<up<<" :\n";
    for(i=lw;i<=up;i++)
    {
        sum=0;
        prod=1;
        n=i;
        while(n>0)
        {
            d=n%10;
            sum=sum+d;
            prod=prod*d;
            n=n/10;
        }
        if(sum==prod)
            cout<<i<<endl;
    }
    return 0;
}
