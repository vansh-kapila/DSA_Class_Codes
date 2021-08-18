#include <bits/stdc++.h>
using namespace std;

int main(){
   
   int capacity;
   cin>>capacity;
   int arr[capacity];
   
   int n;
   cin>>n;

   for(int i=0;i<n;i++)
   {
   	cin>>arr[i];
   }

   if(n<capacity)
   {
   	int x;
   	cin>>x;
   	arr[n]=x;
   	cout<<"THE ELEMENT IS INSERTED AND THE ARRAY IS :-"<<endl;
    for(int i=0;i<n+1;i++)
    {
    	cout<<arr[i]<<" ";
    }

   }
   else
   {
    cout<<"THE ELEMENT CANNOT BE INSERTED AND THE ARRAY IS"<<endl;
   	for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
   }

 


}