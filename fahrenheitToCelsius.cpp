#include<iostream>
using namespace std;
int main()
{
    float c,f;
    system("cls");
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>f;
    c=(f-32)/1.8;
    cout<<"Temperature in centigrade: "<<c;
    return 0;
}
