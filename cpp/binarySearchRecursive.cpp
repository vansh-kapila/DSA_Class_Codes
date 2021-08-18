#include <iostream>
#include <algorithm>
using namespace std;

int binSearch(int *arr,int l,int r,int target){
    if(l>r){
        return -1;
    }
    int mid=(l+r)/2;
    cout << " l is -> " << l;
    cout << " mid is -> " << mid;
    cout << " r is -> " << r;
    cout << endl;
    if(arr[mid]==target) return mid;
    else if(arr[mid]>target) return binSearch(arr,l,mid-1,target);
    else return binSearch(arr,mid+1,r,target);
}

int main(){
    int n;
    cout << "Enter the size of the array -> ";
    cin >> n;

    int * arr=new int[n];
    cout << "Enter the elements -> ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target value -> ";
    cin >> target;
    int idx=binSearch(arr,0,n-1,target);
    if(idx==-1) cout << "Element not found" << endl;
    else cout << "Element found at " << idx << endl;
}