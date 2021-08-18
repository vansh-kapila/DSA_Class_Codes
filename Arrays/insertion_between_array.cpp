#include <iostream>
using namespace std;
   
int* insertX(int n, int arr[],int x, int pos)
{
    int i; 
    n++;
   
    for (i = n; i >= pos; i--)
        arr[i] = arr[i - 1]; 
    arr[pos - 1] = x;
  
    return arr;
} 
int main()
{ 
    int i, x, pos, n = 10; 
    int arr[100] = {1,2,3,4,6,7,8,9,10};
   
    for(i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl; 
    x = 5;
   
    pos = 5; 
    insertX(n, arr, x, pos);
   
    for (i = 0; i < n + 1; i++)
        cout << arr[i] << " ";
    cout << endl;
  
    return 0;
}
