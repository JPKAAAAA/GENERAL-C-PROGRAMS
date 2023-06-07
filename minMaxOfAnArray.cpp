#include<iostream>
using namespace std;
int main()
{
    int i,n,val,min,max=0;
    cout<<"How many numbers you want to enter: ";
    cin>>n;
    cout<<"\nEnter numbers:\n";
    cin>>val;
    min=val;
    if(val>=max)
    max=val;
    for(i=1;i<n;i++)
    {
        cin>>val;
        if(val>max)
            max=val;
        if(val<min)
            min=val;
    }
    cout<<"\nMaximum number is: "<<max<<endl;
    cout<<"\nMinimum number is: "<<min<<endl;
    return 0;
}
