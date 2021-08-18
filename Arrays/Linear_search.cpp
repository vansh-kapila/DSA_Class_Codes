#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int x,int arr[],int n)
	
	{for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
			{return i;
			 break;}

	}
	return -1;}

int main(){
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int x;
	cin>>x;
	
    int index = LinearSearch(x,arr,n);
	cout<<index<<endl;}

