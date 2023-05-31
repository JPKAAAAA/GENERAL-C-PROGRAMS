#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int num,temp,sum,i=1,n=0;
    cout<<"Enter a three digit number: ";
    cin>>num;
    sum=0;
    i=num;
    while(num>0)
    {
        n=num%10;
        num=num/10;
        sum=sum+(n*n*n);
    }
    if(sum==i)
        cout<<"\n"<<i<<" is an ARMSTRONG number.";
    else
        cout<<"\n"<<i<<" is not a ARMSTRONG number.";
    return 0;
}
