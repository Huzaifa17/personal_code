#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,j,k,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;++i)
	{
		cin>>arr[i];
	}
	cin>>k;
	vector<int> v(arr,arr+n);
	vector<int>:: iterator m;
	m=lower_bound(v.begin(),v.end(),k);
	if(m!=v.end())
	{
		cout<<"lower bound: "<<*m<<" at index: "<<m-v.begin()<<endl;
	}
	m=upper_bound(v.begin(),v.end(),k);
	if(m!=v.end())
	{
		cout<<"upper_bound: "<<*m<<" at index: "<<m-v.begin()<<endl;
	}
	return 0;
}
