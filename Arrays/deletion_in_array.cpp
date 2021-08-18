#include<bits/stdc++.h>
using namespace std;
 
// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
    if (arr[i] == x)
        break;
 
// If x found in array
if (i < n)
{
    // reduce size of array and move all
    // elements on space ahead
    n = n - 1;
    for (int j=i; j<n; j++)
        arr[j] = arr[j+1];
}
 
return n;
}
  
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 8;
  
    n = deleteElement(arr, n, x);
 
    cout << "Modified array is \n";
    for (int i=0; i<n; i++)
    cout << arr[i] << " ";
 
    return 0;
}
