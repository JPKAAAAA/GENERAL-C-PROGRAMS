#include<iostream>
using namespace std;
int main()
{
    int n,cn,num,r,t,equal,i;
    long int sq;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"List of Automorphic numbers between 1 to "<<n<<" :\n";
    cout<<"Number : Square"<<endl;
    for(i=1;i<=n;i++)
    {
        cn=i;
        num=i;
        sq=cn*cn;
        t=10;
        equal=0;
        while(cn>0)
        {
            r=sq%t;
            if(num==r)
            {
                equal=1;
                break;
            }
            cn=cn/10;
            t=t*10;
        }
        if(equal==1)
        {
            cout<<num<<" : "<<sq<<endl;
        }
    }
    return 0;
}
