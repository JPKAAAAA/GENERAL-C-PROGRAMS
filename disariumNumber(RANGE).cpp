#include<iostream>
#include<math.h>
using namespace std;
int isDisarium(int);
int digit_count(int);
int main()
{
    int i,limit;
    int sum=0,digit_count=0,pd;
    cout<<"Enter a number(upper limit): ";
    cin>>limit;
    cout<<"Disarium Numbers between 1 to "<<limit<<endl;
    for(i=1;i<=limit;i++)
    {
        if(isDisarium(i)==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
int isDisarium(int n)
{
    int dc=digit_count(n);
    int pd;
    int sum=0;
    int t=n;
    while(t!=0)
    {
        pd=t%10;
        sum=sum+pow(pd,dc--);
        t=t/10;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int digit_count(int n)
{
    int count=0;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
