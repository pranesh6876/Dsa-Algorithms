#include<bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n)  
{  
    int i, j;  
    for (i = 1; i < n; i++) 
    {  
        int flag = a[i];  
        j = i - 1;  
        while (j >= 0 && a[j] > flag) 
        {  
            a[j + 1] = a[j];  
            j = j - 1;  
        }  
        a[j + 1] = flag;  
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
	insertionSort(a, n);
	cout<<"the sorted array is: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\n";
	}
	
	return 0;
}