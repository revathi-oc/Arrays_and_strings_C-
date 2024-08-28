//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main()
{
    cout<<"1.Array input"<<endl;
    int i,a;
    cout<<"Enter number of elements of array: ";
    cin>>a; 
    int arr[a];
    cout<<"Enter elements of array: "<<endl;
    for(i=0;i<a;i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin>>arr[i];
    }
    cout<<"Entered array is: "<<endl;
    for(i=0;i<a;i++)
    {
        
        cout<<arr[i]<<" ";
    }
return 0;
}