#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	double arr[n];
	double sum = 0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		sum+=arr[i];
	}
	sort(arr,arr+n);

	cout<<"THE MEDIAN IS ";
	if(n%2==0)
		 cout<<(arr[n/2]+arr[n/2-1])/2<<endl;
	else
		cout<<arr[(n+1)/2]<<endl;

	cout<<"THE MEAN IS ";
	cout<<sum/n<<endl;
}