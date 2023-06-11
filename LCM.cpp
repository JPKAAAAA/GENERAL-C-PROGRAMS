#include<iostream>
using namespace std;
int lcm(int,int);
int main()
{
    int x,y=1;
    cout<<"Enter Numbers to find LCM (press 0 to exit)"<<endl;
    while(1)
    {
        cin>>x;
        if(x<1)
            break;
        else if(x>y)
            y=lcm(x,y);
        else
            y=lcm(y,x);
    }
    cout<<"LCM is"<<y;
    return 0;
}
int lcm(int x,int y)
{
    int temp=x;
    while(1)
    {
        if(temp%y==0 && temp%x==0)
            break;
        temp++;
    }
    return temp;
}
