#include<bits/stdc++.h>
using namespace std;

int josephus2(int n,int r)
{
	if(n==1)
	{
		return 1;
	}
	return (josephus2(n-1,r)+(r-1))%n+1;
}

int main()
{
	int i,j,k,n,m,t;
	cin>>n>>m;
	cout<<josephus2(n,m)<<endl;
}
