//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"8.String reversal"<<endl;
    string str1, str2;
    int i,len;
    cout<<"Enter a string: ";
    cin>>str1;
    len= str1.length();
     cout<<"Reversed string is : ";
    for (i=(len-1);i>=0;i--)
    {
        cout<<str1[i];
    }
    
    return 0;

}