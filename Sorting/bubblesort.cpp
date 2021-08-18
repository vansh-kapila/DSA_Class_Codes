#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,4,3,1,5,7,10,9,80};

    for(int i=0;i<10;i++)
    {
       for(int j=1;j<10-i;j++)
       {
          if(arr[j]<arr[j-1])
          {
             swap(arr[j],arr[j-1]);
          }
       }
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
}