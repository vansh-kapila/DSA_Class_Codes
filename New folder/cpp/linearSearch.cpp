#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array -> ";
    cin >> n;

    int * arr=new int[n];
    cout << "Enter the elements -> ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target -> ";
    cin >> target;
    int idx=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }
    if(idx!=-1) cout << "Element was found at the index " << idx << endl;
    else cout << "The target was not found" << endl;
    delete []arr;

}