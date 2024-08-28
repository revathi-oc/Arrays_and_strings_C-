//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main(){
    
    cout<<"5.Min & max value in an array"<<endl;
    int n, i, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: "<<endl;
    for( i = 0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin >> a[i];
    }
    max=a[0];
    min=a[0];
    for( i = 0; i<n ; i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
        if(min>a[i])
        {
            min=a[i];
        }
    }
    cout<<"The maximum element of array is: "<<max<<endl;
    cout<<"The minimum element of array is: "<<min;   
    return 0;
}