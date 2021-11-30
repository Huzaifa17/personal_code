#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b)
{
	if(b==0)
	{
		return a;
	}

	return(gcd(b,a%b));
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	long long int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n>>m;
		cout<<((n*m)/gcd(n,m))<<endl;
	}
	return 0;
}
