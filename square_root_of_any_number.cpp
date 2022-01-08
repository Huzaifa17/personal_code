#include<iostream>
#include<cmath>
using namespace std;

double sqrt(double n)
{
	double left=0,right=n,mid,k,m,t,lim=0.000000001;
	while(left<=right)
	{
		mid=left+((right-left)/2);
		k=mid*mid;
	    if(fabs(n-k)<=lim)
	    {
			return mid;
		}
		else if(k>n)
		{
			right=mid;
		}
		else 
		{
			left=mid;
		}
	}
	return mid;
}

int main()
{
	int i,t;
	double n,m;
	cin>>t;
	for(i=0;i<t;++i)
	{
		cin>>n;
		cout<<"sqrt of "<<n<<" is: "<<sqrt(n)<<endl;
	}
	return 0;
}
