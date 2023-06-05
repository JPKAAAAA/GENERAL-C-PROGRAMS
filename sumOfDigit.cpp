#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int n,num,x,sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        x=n%10;
        sum=sum+x;
        n=n/10;
    }
    cout<<"Sum of digits of a number: "<<sum;
    return 0;
}
