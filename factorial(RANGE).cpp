#include<iostream>
using namespace std;
int main()
{
int n,cn,i,j;
long int fact;
cout<<"Enter a number: ";
cin>>n;
cout<<"\nFactorial of numbers between 1 to "<<n<<" : "<<endl;
cout<<"Number : Factorial "<<endl;
for(i=1;i<=n;i++)
{
    cn=i;
    fact=1;
    for(j=1;j<=cn;j++)
        fact=fact*j;
    cout<<cn<<"! : "<<fact<<endl;
}
return 0;
}
