#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2,4,3,1,5,7,10,9,8,6};
    int min=-100000007;
    int k=0;
     for(int i=0;i<9;i++)
     {   min = arr[i];
           k=i;
         for(int j=i+1;j<10;j++)
         {
              if(arr[j]<min)
              {
                  min = arr[j];
                  k = j;
              }
         }
         swap(arr[i],arr[k]);
 
         
     }

     for(int i=0;i<10;i++)
     {cout<<arr[i]<<" ";}
     cout<<endl;
}