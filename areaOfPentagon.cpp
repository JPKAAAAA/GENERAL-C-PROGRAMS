#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int side;
    float area;
    cout<<"\nEnter the Length of Side: ";
    cin>>side;
    area=(sqrt(5*(5+2*sqrt(5)))*side*side)/4;
    cout<<"\nArea of Regular Pentagon: "<<area;
    return 0;
}
