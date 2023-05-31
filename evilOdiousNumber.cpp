#include<iostream>
using namespace std;
int main()
{
    int num;
    int count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num!=0)
    {
        if(num%2==1)
            count++;
        num/=2;
    }
    if(count%2==0)
    {
        cout<<"Evil Number.";
    }
    else
        cout<<"Odious Number.";
    return 0;
}
