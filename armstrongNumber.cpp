#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    system("cls");
    int num,temp,sum,i=1,n=0,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    sum=0;
    i=num;
    while(num>0)
    {
        n=num%10;
        num=num/10;
        sum=sum+pow(n,count);
    }
    if(sum==i)
        cout<<"\n"<<i<<" is an ARMSTRONG number.";
    else
        cout<<"\n"<<i<<" is not a ARMSTRONG number.";
    return 0;
}
