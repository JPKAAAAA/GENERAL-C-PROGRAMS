#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int side;
    float area;
    cout<<"\nEnter the length of sides: ";
    cin>>side;
    area=(float)(sqrt(3)*(side*side))/4;
    cout<<"\nArea of Equilateral Triangle: "<<area;
    return 0;
}
