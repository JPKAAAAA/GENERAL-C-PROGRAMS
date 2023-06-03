#include<iostream>
using namespace std;
int main()
{
    int i,limit,num;
    int count=0;
    cout<<"Enter a number: ";
    cin>>limit;
    cout<<"Evil number between 1 to "<<limit<<endl;
    for(i=1;i<limit;i++)
    {
        num=i;
        count=0;
        while(num!=0)
        {
            if(num%2==1)
                count++;
            num/=2;
        }
        if(count%2==0)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}
