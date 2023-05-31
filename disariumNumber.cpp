#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num,temp;
    int sum=0,digit_count=0,pd;
    cout<<"Enter a number: ";
    cin>>num;
    temp=num;
    while(temp!=0)
    {
        temp=temp/10;
        digit_count++;
    }
    temp=num;
    while(temp!=0)
    {
        pd=temp%10;
        sum=sum+pow(pd,digit_count);
        temp=temp/10;
        digit_count--;
    }
    if(sum==num)
        cout<<num<<" is a Disarium Number.";
    else
        cout<<num<<" is not a Disarium Number.";
    return 0;
}
