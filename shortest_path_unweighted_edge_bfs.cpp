#include<bits/stdc++.h>
using namespace std;

#define MAX 50
int level[MAX];
int previous[MAX];
int next1[MAX];
list<int> graph[MAX];
list<int> :: iterator it;

void bfs(int source,int destination,int nodes)
{
	bool visited[nodes+1]={0};
	list<int> queue;
	queue.push_back(source);
	level[source]=0;
	previous[source]=-1;
	visited[source]=true;
	cout<<"bfs:";
	while(!queue.empty())
	{
		int n=queue.front();
		cout<<" "<<n;
		queue.pop_front();
		for(it=graph[n].begin();it!=graph[n].end();++it)
		{
			if(!visited[*it])
			{
				visited[*it]=true;
				level[*it]=level[n]+1;
				previous[*it]=n;
				queue.push_back(*it);
			}
		}
	}
	cout<<endl;
	return ;
}

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>n;
	for(i=0;i<n;++i)
	{
		cout<<"For node: "<<i+1<<endl;
		while(1)
		{
			cout<<"connected: ";
			cin>>k;
			if(k==-1)
			{
				break;
			}
			graph[i+1].push_back(k);
		}
	}
	cout<<"source: ";
	cin>>k;
	cout<<"destination: ";
	cin>>m;
	t=m;
	bfs(k,m,n);
	cout<<"distance: "<<level[m]<<endl;
	cout<<"route: "<<k;
	while(previous[m]!=-1)
	{
		next1[previous[m]]=m;
		m=previous[m];
	}
	do
	{
		cout<<" "<<next1[k];
		k=next1[k];
	}
	while(next1[k]!=t);
	cout<<" "<<t<<endl;
	return 0;
}
