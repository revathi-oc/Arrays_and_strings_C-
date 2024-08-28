//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
   cout<<"9.String Palindrome"<<endl;
   string str1;
   int i,len,k=0;
   cout<<"Enter a string: ";
   cin>>str1;
   len=str1.length();
   for(i=(len-1);i>=0;i--)
   {
    if(str1[i]==str1[k])
    k++;
    else
    break;
   }
   if(k==len)
   {
    cout<<"Palindrome string ";
    }
   else{
   cout<<"Not palindrome  ";}
   
   return 0;
}