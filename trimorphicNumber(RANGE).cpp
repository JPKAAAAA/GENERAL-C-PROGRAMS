#include<iostream>
using namespace std;
int isTrimorphic(int);
int main()
{
    int limit;
    cout<<"Enter a number(upper limit): ";
    cin>>limit;
    cout<<"Trimorphic number from 1 to "<<limit<<endl;
    for(int i=1;i<=limit;i++)
    {
        if(isTrimorphic(i)==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
int isTrimorphic(int n)
{
    long cube;
    int flag=1;
    cube=n*n*n;
    while(n!=0)
    {
        if(n%10!=cube%10)
        {
            flag=0;
            break;
        }
        n/=10;
        cube/=10;
    }
    if(flag==1)
        return 1;
    else
        return 0;
}
