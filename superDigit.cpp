#include<iostream>
using namespace std;
int main()
{
    long int n,x,s;
    cout<<"Enter any number: ";
    cin>>n;
    while(n>=10)
    {
        x=n;
        s=0;
        while(x>0)
        {
            s=s+(x%10);
            x=x/10;
        }
        n=s;
    }
    cout<<"\nSuper Digit of the given number is "<<n;
    return 0;
}
