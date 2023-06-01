#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int limit;
    double x;
    cout<<"Enter a Number(upper limit): ";
    cin>>limit;
    cout<<"Sunny Numbers between 1 to  "<<limit<<endl;
    for(int i=1;i<=limit;i++)
    {
        x=sqrt(i+1);
        if((int)x==x)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
