#include <iostream>
using namespace std;
int main()
{
    cout << "Enter the number of elements -> ";
    int n; 
    cin>>n;
    cout << "Enter the elements -> ";
    int * arr=new int[n];
    for(int i =0;i<n;i++) cin>> arr[i];
    cout << "Before sorting -> ";
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
    cout << endl;
    for(int i =0;i<n-1;i++) 
        for(int j = 0;j<n-1-i; j++) 
            if(arr[j]>arr[j+1]) 
                swap(arr[j],arr[j+1]);
    cout << "After sorting -> ";
    for(int i=0;i<n;i++) 
        cout << arr[i] << " ";
    delete []arr;
    return 0;
 }