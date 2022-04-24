#include<bits/stdc++.h>
using namespace std;
#define MX 100005
#define pii pair<int,vector<int>>
vector<pair<int,int>> graph[MX];

void dijkstra(int st,int ed)
{
	priority_queue<pii,vector<pii>,greater<pii>> q,q2;
	//q.push({0,st});
	vector<int> path;
	path.push_back(st);
	q.push({0,path});
	while(!q.empty())
	{
		auto node=q.top().second;
		auto val=q.top().first;
		q.pop();
		for(auto& it:graph[node.back()])
		{
			vector<int> temp=node;
			int val2=val+it.second;
			temp.push_back(it.first);
			q.push({val2,temp});
			if(it.first==ed)
			{
				q2.push({val2,temp});
			}
		}
	}
	vector<int> v1,v2;
	int value1,value2;
	v1=q2.top().second;
	value1=q2.top().first;
	q2.pop();
	v2=q2.top().second;
	value2=q2.top().first;
	cout<<"Shortest path: "<<endl;
	cout<<"cost: "<<value1<<endl;
	cout<<"path:";
	for(int i=0;i<v1.size();++i)
	{
		cout<<" "<<v1[i];
	}
	cout<<endl;
	cout<<"second Shortest path: "<<endl;
	cout<<"cost: "<<value2<<endl;
	cout<<"path:";
	for(int i=0;i<v2.size();++i)
	{
		cout<<" "<<v2[i];
	}
	cout<<endl;
	return ;
}

int main()
{
	//freopen("Test_input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n>>m;
	for(i=1;i<=m;++i)
	{
		int a,b;
		cin>>a>>b>>k;
		graph[a].push_back({b,k});
	}
	int st,ed;
	for(i=1;i<=n;++i)
	{
		cout<<"node: "<<i<<" : ";
		for(auto& it: graph[i])
		{
			cout<<" "<<it.first;
		}
		cout<<endl;
	}
	cin>>st>>ed;
	dijkstra(st,ed);
	return 0;
}
