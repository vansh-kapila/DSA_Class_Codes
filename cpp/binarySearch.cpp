#include <iostream>
#include <algorithm>
using namespace std;

int binSearch(int *arr,int n,int target){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        cout << " l is -> " << l;
        cout << " mid is -> " << mid;
        cout << " r is -> " << r;
        cout << endl;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
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
    int idx=binSearch(arr,n,target);
    if(idx==-1) cout << "Element not found" << endl;
    else cout << "Element found at " << idx << endl;
}