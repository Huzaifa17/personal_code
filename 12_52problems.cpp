#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		int arr[10]={0};
		for(j=n;j>1;j--)
		{
			m=j;
			for(k=2;k<=m;k++)
			{
				if(m%k==0)
				{
					while(m%k==0)
					{
						arr[k-1]++;
						m=m/k;
						//cout<<k<<endl;
					}
				}
			}
		}
		if(arr[1]<=arr[4])
		{
			cout<<arr[1]<<endl;
		}
		else
		{
			cout<<arr[4]<<endl;
		}
	}
	return 0;
}
