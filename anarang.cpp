#include<iostream>
using namespace std;
int anagram(char[],char[]);
int main()
{
    char str1[50],str2[50];
    int check;
    cout<<"Enter first string: ";
    cin>>str1;
    cout<<"Enter second string: ";
    cin>>str2;
    check=anagram(str1,str2);
    if(check==1)
        cout<<"\""<<str1<<"\" and \""<<str2<<"\" are Anagrams.";
    else
        cout<<"\""<<str1<<"\" and \""<<str2<<"\" are not Anagrams.";
    return 0;
}
int anagram(char s1[],char s2[])
{
    int first_str[256]={0};
    int second_str[256]={0};
    int i=0;
    while(s1[i]!='\0')
    {
        first_str[s1[i]]++;
        i++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        second_str[s2[i]]++;
        i++;
    }
    for(i=0;i<256;i++)
    {
        if(first_str[i]!=second_str[i])
            return 0;
    }
    return 1;
}
