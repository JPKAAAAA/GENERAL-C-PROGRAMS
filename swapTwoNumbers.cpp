#include<iostream>
using namespace std;
int main()
{
    int x,y,temp;
    cout<<"Enter the value of x and y\n";
    cin>>x>>y;
    cout<<"Before Swapping\n x= "<<x<<"\n y= "<<y<<endl;
    temp=x;
    x=y;
    y=temp;
    cout<<"After Swapping\n x= "<<x<<"\n y= "<<y<<endl;
    return 0;
}
