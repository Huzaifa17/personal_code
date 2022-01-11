#include<iostream>
using namespace std;

int bs(int low,int high,int key,int arr[])
{
	int i,j,k,mid;
	while(low<=high)
	{
		mid=low+((high-low)/2);
		if(arr[mid]==key)
		{
			return mid;
		}
		if(arr[low]<arr[mid])
		{
			if(arr[low]<=key&&arr[mid]>key)
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		else
		{
			if(arr[mid]<key&&arr[high]>=key)
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
	}
	return -1;
}

int main()
{
	int i,j,k,n,m;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cin>>k;
	m=bs(0,n-1,k,arr);
	if(m==-1)
	{
		cout<<"Not found"<<endl;
	}
	else
	{
		cout<<"Found !!! Index: "<<m+1<<endl;
	}
	return 0;
}
