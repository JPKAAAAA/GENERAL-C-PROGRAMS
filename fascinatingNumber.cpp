#include<iostream>
using namespace std;
int isFascinating(int);
int main()
{
    int num;
    cout<<"Enter a 3 digit Number: ";
    cin>>num;
    if(isFascinating(num)==1)
    {
        cout<<num<<" is a Fascinating Number.";
    }
    else
        cout<<num<<" is not a Fascinating Number.";
    return 0;
}
int isFascinating(int n)
{
    int n2=n*2;
    int n3=n*3;
    int freq[11]={0};
    while(n!=0)
    {
        freq[n%10]++;
        n/=10;
    }
    while(n2!=0)
    {
        freq[n2%10]++;
        n2/=10;
    }
    while(n3!=0)
    {
        freq[n3%10]++;
        n3/=10;
    }
    for(int i=1;i<=9;i++)
    {
        if(freq[i]!=1)
            return 0;
    }
    return 1;
}
