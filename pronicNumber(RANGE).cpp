#include<iostream>
using namespace std;
int main()
{
    int i,limit;
    int n,flag=0;
    cout<<"Enter a number(upper limit): ";
    cin>>limit;
    for(i=0;i<=limit;i++)
    {
        flag=0;
        for(n=0;n<=i;n++)
        {
            if(n*(n+1)==i)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
