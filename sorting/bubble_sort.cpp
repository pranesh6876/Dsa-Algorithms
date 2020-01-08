#include<bits/stdc++.h>
using namespace std;

int bubble_sort(int n,int a[]){
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1]){
				a[j+1] = a[j+1]+a[j];
				a[j] = a[j+1] - a[j];
				a[j+1] = a[j+1] - a[j];
			}
		}
	}
}

int main()
{
	int n, a[n];
	cout<<"enter the size of the array ";
	cin>>n;
	cout<<"enter the elements of the array ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	bubble_sort(n,a);
	cout<<"the sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	
	return 0;
}