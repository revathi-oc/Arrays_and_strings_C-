//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"10.Occurence of letter"<<endl;
    int l,i,count=0;
    string a;
    char search;
    cout<<"Enter a string: ";
    cin>>a;
    cout<<" Enter the letter to be counted: ";
    cin>>search;
    l=a.length();//length of the string
    for(i=0;i<l;i++)
    {
        if(a[i]==search)
        {
           count++;
        }
    }
    cout<<" Occurence of "<<search<<" in "<<a<<" is "<<count<<" times";

}