#include<iostream>
using namespace std;
int main()
{
    int n,cn,i,j,count;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"\nList of Prime numbers between 1 to "<<n<<" :\n";
    for(i=1;i<=n;i++)
    {
        cn=i;
        count=0;
        for(j=1;j<=cn;j++)
        {
            if(cn%j==0)
                count++;
        }
        if(count==2)
            cout<<cn<<endl;
    }
    return 0;
}
