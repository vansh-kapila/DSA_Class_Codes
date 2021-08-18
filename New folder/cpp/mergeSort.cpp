#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;
    int arr1[n1],arr2[n2];

    for(int i=0;i<n1;i++){
        arr1[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        arr2[i]=arr[mid+i+1];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    while(j<n2){
        arr[k++]=arr2[j++];
    }
}
void mergeSort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid); 
        mergeSort(arr,mid+1,r); 
        merge(arr,l,mid,r); 
    }
}
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
    mergeSort(arr,0,n-1);
    cout << "After sorting -> ";
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;

    delete []arr;
    return 0;
}