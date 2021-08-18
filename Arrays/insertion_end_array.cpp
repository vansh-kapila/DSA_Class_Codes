#include <iostream>
using namespace std;
  
int insertSorted(int arr[], int n,int key,int capacity)
{
  
    if (n >= capacity)
    return n;
 
    arr[n] = key;
 
    return (n + 1);
} 
int main()
{
    int arr[20] = {1, 10, 20, 40, 50, 60};
    int capacity = sizeof(arr) / sizeof(arr[0]);
    int n = 6;
    int i, key = 70;
 
    cout << "\n Before Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i]<< " ";
  
    n = insertSorted(arr, n, key, capacity);
 
    cout << "\n After Insertion: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
 
    return 0;
}