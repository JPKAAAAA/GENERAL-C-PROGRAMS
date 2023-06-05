#include<iostream>
using namespace std;
int main()
{
    int pow,num,i=1;
    long int sum=1;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"\nEnter power: ";
    cin>>pow;
    while(i<=pow)
    {
        sum=sum*num;
        i++;
    }
    cout<<endl<<num<<" to the power "<<pow<<" is: "<<sum;
    return 0;
}
