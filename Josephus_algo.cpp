#include<iostream>
using namespace std;

int josephus(int n,int r)
{
	if(n==1)
	{
		return 0;
	}
	return (josephus(n-1,r)+r)%n;
}

int main()
{
	int i,j,k,n,m,r;
	cin>>n>>r;
	cout<<josephus(n,r)<<endl;
	return 0;
}
