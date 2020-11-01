#include<iostream>
using namespace std;


int binarySearch(int arr[],int n,int val)
{
	int start=0;
	int end=n-1;
	
	while(start<=end)
	{
		int mid = (start + end) / 2;
		
		if(arr[mid]==val)
		{
			return mid;
		}
		
		else if(end < arr[mid])
		{
			end = mid - 1;
		}
		else
		{
			start = mid +1;
		}
	}
	
	return -1;
}


int main()
{
	int n;
	cout<<"Enter the size of the array:"<<endl;
	cin>>n;
	
	int arr[n];
	
	cout<<"Enter the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	int x;
	cout<<"Enter the array to be searched:"<<endl;
	cin>>x;
	
	cout<< binarySearch(arr, n, x)<<endl;
}
