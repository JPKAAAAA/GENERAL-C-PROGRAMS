#include<iostream>
using namespace std;
int main()
{
    int n,num,r,t,equal;
    long int sq;
    cout<<"Enter a number: ";
    cin>>n;
    num=n;
    sq=n*n;
    t=10;
    cout<<"\nSquare of "<<n<<" is "<<sq<<endl;
    while(n>0)
    {
        r=sq%t;
        if(num==r)
        {
            equal=1;
            break;
        }
        n=n/10;
        t=t*10;
    }
    if(equal==1)
    {
        cout<<num<<" is an Automorphic number.";
    }
    else
        cout<<num<<" is not an Automorphic number.";
    return 0;
}
