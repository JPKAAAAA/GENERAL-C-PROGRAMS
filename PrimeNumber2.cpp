#include<iostream>
using namespace std;
int main()
{
    int i,j=2,ch=0;
    cout<<"\nEnter Any Number: ";
    cin>>i;
    if(i<=1)
        ch=1;
    while(j<=i/2)
    {
        if(i%j==0)
        {
            ch=1;
            break;
        }
        else
        {
            j++;
        }
    }
    if(ch==0)
    {
        cout<<i<<" is a Prime Number.";
    }
    else
        cout<<i<<" is not a Prime Number.";
    return 0;

}
