#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int n,max,num,c;
    cout<<"Enter the number of random numbers you want: ";
    cin>>n;
    cout<<"Enter the maximum value of random number: ";
    cin>>max;
    cout<<n<<" random numbers from 0 to "<<max<< "are: ";
    srand(time(0));
    for(c=1;c<=n;c++)
    {
        num=rand()%max;
        cout<<num<<endl;
    }
    return 0;
}
