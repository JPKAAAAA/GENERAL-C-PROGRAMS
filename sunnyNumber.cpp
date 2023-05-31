#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    double x;
    cout<<"Enter a Number:";
    cin>>num;
    x=sqrt(num+1);
    if((int)x==x)
        cout<<num<<" is a Sunny Number.";
    else
        cout<<num<<" is Not a Sunny Number.";
    return 0;
}
