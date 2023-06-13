#include<iostream>
using namespace std;
int hcf(int x,int y)
{
    int i;
    for(i=x;i>=1;i--)
    {
        if(x%i==0&&y%i==0)
            break;
    }
    return i;
}
int main()
{
    system("cls");
    int x,y=-1;
    cout<<"Enter numbers to find HCF/GCD(press 0 to exit): ";
    while(1)
    {
        cin>>x;
        if(x<1)
        {
            break;
        }
        else if(y==-1)
        {
            y=x;
        }
        else if(x<y)
        {
            y=hcf(x,y);
        }
        else
            y=hcf(y,x);
    }
    cout<<"HCF/GCD is: "<<y;
    return 0;
}
