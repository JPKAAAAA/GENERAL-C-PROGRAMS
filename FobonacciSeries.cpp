#include<iostream>
using namespace std;
int main()
{
    system("cls");
    int first_no=0;
    int second_no=1;
    int result,user_no,count=0;
    cout<<"Enter any Number: ";
    cin>>user_no;
    while(1)
    {
        result=first_no+second_no;
        count++;
        if(result>=user_no)
            break;
        first_no=second_no;
        second_no=result;
        cout<<"\nFibbonacci No.["<<count<<"] ->"<<result;
    }
    return 0;
}
