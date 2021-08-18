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
    int ele;
    for(size_t i=0;i<n-1;i++){
        ele = i;
        for(size_t j=i+1;j<n;j++){
            if(arr[j]<arr[ele]) ele=j;
        }
        swap(arr[i],arr[ele]);
    }
    cout << "After sorting -> ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
    delete []arr;
}