#include<iostream>
#include<map>
using namespace std;


int main()
{
	int i,t,j,k,n,x,y,m;
	map<int ,int> mp;
	map<int,int> ::iterator it;
	cin>>t;
	char a;
	//cin>>k;
	for(i=0;i<t;++i)
	{
		cin>>k;
		int sign=0;
		for(j=0;j<k;++j)
		{
			cin>>a;
			if(a=='a')
			{
				cin>>x>>y;
				mp.insert({x,y});
			}
			else if(a=='b')
			{
				cin>>x;
				it=mp.find(x);
				if(it==mp.end())
				{
					if(sign==0)
					{
			           cout<<-1;
			           sign=1;
				    }
				    else
				    {
						cout<<" "<<-1;
					}
				}
				else
				{
					if(sign==0)
					{
			           cout<<it->second;
			           sign=1;
				    }
				    else
				    {
						cout<<" "<<it->second;
					}
				}
			}
			else
			{
				for(it=mp.begin();it!=mp.end();++it)
				{
					if(sign==0)
					{
			           cout<<it->first<<" "<<it->second;
			           sign=1;
				    }
				    else
				    {
						cout<<" "<<it->first<<" "<<it->second;
					}
					//cout<<it->first<<" "<<it->second;
				}
			}
		}
		cout<<endl;
	}
	return 0;
}
