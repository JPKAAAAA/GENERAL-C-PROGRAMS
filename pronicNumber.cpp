#include<iostream>
using namespace std;
int main()
{
    int num;
    int n,flag=0;
    cout<<"Enter a number: ";
    cin>>num;
    for(n=0;n<=num/2;n++)
    {
        if(n*(n+1)==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<num<<" is Pronic Number and it is product of "<<n<<" and "<<n+1;
    else
        cout<<num<<"is not a Pronic Number.";
    return 0;
}
