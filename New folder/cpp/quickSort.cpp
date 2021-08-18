#include <iostream>

void quickSort(int arr[],int l,int r);
int partition(int arr[],int l,int r);

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
    quickSort(arr,0,n-1);

    cout << "After sorting -> ";
    for(int i=0;i<n;i++) std::cout << arr[i] << " ";
    cout << endl;
    delete []arr;
    return 0;
}

void quickSort(int arr[],int l,int r){
    if(l<r){
        int pivot=partition(arr,l,r);
        quickSort(arr,l,pivot-1);
        quickSort(arr,pivot+1,r);
    }
}

int partition(int arr[],int l,int r){
    int compare=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<compare){
            i++;
            std::swap(arr[i],arr[j]);
        }
    }
    std::swap(arr[i+1],arr[r]);
    return i+1;
}