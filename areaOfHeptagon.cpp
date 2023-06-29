#include<iostream>
using namespace std;
int main()
{
    int side,perimeter;
    float apothem,area;
    cout<<"Enter the value of side: ";
    cin>>side;
    cout<<"Enter the value of Apothem: ";
    cin>>apothem;
    perimeter=7*side;
    area=(perimeter*apothem)/2;
    cout<<"Area of the Regular Heptagon= "<<area;
    return 0;
}
