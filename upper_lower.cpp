#include<iostream>
#include<algorithm>
using namespace std;

int lower_bound(int arr[],int n,int k)
{
	int i,j,m;
	int l=0,r=n-1,mid,pos=-1;
	while(l<=r)
	{
		mid=l+((r-l)/2);
		if(arr[mid]>=k)
		{
			pos=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return pos;
}

int upper_bound(int arr[],int n,int k)
{
	int i,j,m;
	int l=0,r=n-1,mid,pos=-1;
	while(l<=r)
	{
		mid=l+((r-l)/2);
		if(arr[mid]>k)
		{
			pos=mid;
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return pos;
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
	m=lower_bound(arr,n,k);
	if(m!=-1)
	{
		cout<<"lower bound: "<<arr[m]<<" at index: "<<m+1<<endl;
	}
	else
	{
		cout<<"No lower bound!!!"<<endl; 
	}
	m=upper_bound(arr,n,k);
	if(m!=-1)
	{
		cout<<"upper bound: "<<arr[m]<<" at index: "<<m+1<<endl;
	}
	else
	{
		cout<<"No upper bound!!!"<<endl; 
	}
	return 0;
}
