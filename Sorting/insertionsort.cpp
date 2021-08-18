#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,4,3,1,5,7,10,9,8,6};
    for(int i=1;i<10;i++)
    {    int j=i-1;
         int key = arr[i];
         while(arr[j]>key and j>=0)
         {
             arr[j+1]=arr[j];
             j--;
         }
         arr[j+1]=key;
         
    }


    for(int k=0;k<10;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}





