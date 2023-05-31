#include<iostream>
using namespace std;
int main()
{
    int a,b;
    system("cls");
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
     cout<<"Value of A and B before swapping is:\n A: "<<a<<"\n B: "<<b;
     a=a+b;
     b=a-b;
     a=a-b;
     cout<<"\nValue of A and B after swapping is:\n A: "<<a<<"\n B: "<<b;
     return 0;
}
