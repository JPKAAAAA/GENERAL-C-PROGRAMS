#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int side;
    float area;
    cout<<"Enter the Length of Side: ";
    cin>>side;
    area=(3*sqrt(3)*side*side)/2;
    cout<<"Area of Regular Hexagon: "<<area;
    return 0;
}
