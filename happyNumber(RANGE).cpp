#include<iostream>
using namespace std;
int main()
{
    int num,temp,sum,i,limit;
    cout<<"Enter a Number(upper limit): ";
    cin>>limit;
    for(i=1;i<=limit;i++)
    {
        num=i;
        sum=0;
        while(sum!=1 && sum!=4)
        {
            sum=0;
            while(num>0)
            {
                temp=num%10;
                sum=sum+(temp*temp);
                num=num/10;
            }
            num=sum;
        }
        if(sum==1)
            cout<<i<<endl;
    }
    return 0;
}
