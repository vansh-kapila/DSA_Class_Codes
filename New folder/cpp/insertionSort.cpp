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
    int ele,j;
    for(int i=1;i<n;i++){
        ele = arr[i];
        j=i-1;
        while(j>=0 && arr[j]>ele){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ele;
    }
    cout<< "After sorting -> ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}