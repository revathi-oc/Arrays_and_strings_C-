//REVATHI OC
//23070123105
/*#include<iostream>
using namespace std;
int main()
{
    cout<<"2.Array reversal"<<endl;
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
    cout<<"Original array: " <<endl;
    for(i=0;i<a;i++)
    {
        
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Reverse array is: "<<endl;
    for(i=(a-1);i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}*/
//REVATHI OC
//23070123105
#include<iostream>
using namespace std;
int main(){
    cout<<"4.Sum and average of Array"<<endl;
    int n, i;
    float sum=0, avg;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    cout << "Enter array elements: ";
    for( i = 0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<": ";
        cin >> a[i];
       sum=sum+a[i];       
    }
    avg=sum/n;
    cout<<"The sum of elements is = "<<sum<<endl;
    cout<<"The average of elements is = "<<avg<<endl;
    return 0;
}