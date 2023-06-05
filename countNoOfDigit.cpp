#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num)
    {
        num=num/10;
        count++;
    }
    cout<<"Total digits in given number is: "<<count;
    return 0;
}
