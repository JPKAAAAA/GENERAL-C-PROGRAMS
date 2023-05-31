#include<iostream>
using namespace std;
long int factorial(int);
int main()
{
    system("cls");
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<factorial(n);
    return 0;
}
long int factorial(int n)
{
    if(n<=1)
        return 1;
    else
    {
        n=n*factorial(n-1);
        return n;
    }
}
