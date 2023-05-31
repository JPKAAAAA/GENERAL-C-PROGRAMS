#include<iostream>
using namespace std;
int main()
{
    int n;
    int flag=1;
    long cube;
    cout<<"Enter a number: ";
    cin>>n;
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
        cout<<"Number is a Trimorphic number.";
    else
        cout<<"Number is Not a Trimorphic number.";
    return 0;
}
