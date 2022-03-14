#include<bits/stdc++.h>
using namespace std;
#define MAX 20

int dis[MAX];
list<pair<int,int>> :: iterator it;

void bfs01(list<pair<int,int>> graph[],int n,int source)
{
	int i,j,k,m;
	for(i=0;i<n;++i)
	{
		dis[i]=INT_MAX;
	}
	for(i=0;i<n;++i)
	{
		cout<<"node: "<<i<<" dis: "<<dis[i]<<endl;
	}
	dis[source]=0;
	list<int> q;
	q.push_back(source);
	while(!q.empty())
	{
		int node=q.front();
		q.pop_front();
		int w,adj;
		for(it=graph[node].begin();it!=graph[node].end();++it)
		{
			adj=(*it).first;
			w=(*it).second;
			if(dis[node]+w<dis[adj])
			{
				dis[adj]=dis[node]+w;
				//cout<<"node: "<<node<<" adj: "<<adj<<" dis: "<<dis[adj]<<endl;
				if(w==1)
				{
					q.push_back(adj);
				}
				else
				{
					q.push_front(adj);
				}
			}
		}
	}
	return ;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n;
	list<pair<int,int>> graph[n];
	for(i=0;i<n;++i)
	{
		cout<<"For node: "<<i<<endl;
		while(1)
		{
			cout<<"Node: ";
			cin>>m;
			if(m==-1)
			{
				break;
			}
			cout<<"Val: ";
			cin>>k;
			graph[i].push_back({m,k});
		}
	}
	for(i=0;i<n;++i)
	{
		for(it=graph[i].begin();it!=graph[i].end();++it)
		{
			cout<<"Node: "<<i<<" adj: "<<(*it).first<<" edge: "<<(*it).second<<endl;
		}
	}
	bfs01(graph,n,0);
	for(i=0;i<n;++i)
	{
		cout<<"node: "<<i<<" dis: "<<dis[i]<<endl;
	}
	return 0;
}
