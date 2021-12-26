#include<bits/stdc++.h>
using namespace std;

#define max 20

int graph[max][max];

void create_graph(int n)
{
	//int graph[n+1][n+1];
	int i,j,k,m,n1,n2;
	m=n-1;
	cout<<"Input the values or '0' to terminate"<<endl;
	for(i=1;i<=m;++i)
	{
		cout<<"Input the intial node:";
		cin>>n1;
		if(n1==0)
		{
			break;
		}
		cout<<"Input the terminal node:";
		cin>>n2;
		cout<<"The value of the edge:";
		cin>>k;
		graph[n1][n2]=k;
		graph[n2][n1]=k;
	}
	return ;
}

void insert_node(int &n)
{
	n++;
	return ;
}

void delete_node(int n,int d_node)
{
	int i,j,k,m;
	if(d_node>n||d_node<=0)
	{
		cout<<"Deletion not possible"<<endl;
		return ;
	}
	// it is possible to delete th e d_node
	for(i=d_node;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			graph[j][i]=graph[j][i+1];
			graph[i][j]=graph[i+1][j];
		}
	}
	return ;
}

void insert_edge(int n,int v1,int v2,int w)
{
	if(v1>n||v1<=0||v2>n||v2<=0)
	{
		cout<<"Not possible to insert the edge"<<endl;
		return ;
	}
	graph[v1][v2]=w;
	graph[v2][v1]=w;
	return ;
}


void delete_edge(int n,int v1,int v2)
{
	if(v1>n||v1<=0||v2>n||v2<=0)
	{
		cout<<"Not possible to delete the edge"<<endl;
		return ;
	}
	graph[v1][v2]=0;
	graph[v2][v1]=0;
	return ;
}

void display(int n)
{
	int i,j,k,m;
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n;++j)
		{
			if(graph[i][j]==0)
			{
				continue;
			}
			cout<<" "<<i<<" -- "<<graph[i][j]<<" -- "<<j;
		}
		cout<<endl;
	}
	return ;
}

int main()
{
	int i,j,k,n,m,t;
	cout<<"Input the size of the graph:";
	cin>>n;
	create_graph(n);
	cout<<"press 1 to insert node"<<endl;
	cout<<"press 2 to insert edge"<<endl;
	cout<<"press 3 to delete node"<<endl;
	cout<<"press 4 to delete edge"<<endl;
	cout<<"press 5 to display"<<endl;
	cout<<"press 0 to stop the program"<<endl;	
	while(1)
	{
		cin>>k;
		if(k==0)
		{
			break;
		}
		else if(k==1)
		{
			insert_node(n);
		}
		else if(k==2)
		{
			int v1,v2,w;
			cout<<"Input the node";
			cin>>v1;
			cout<<"Input the node:";
			cin>>v2;
			cout<<"The value of the edge:";
			cin>>w;
			insert_edge(n,v1,v2,w);
		}
		else if(k==3)
		{
			int d;
			cout<<"Input the node to be deleted:";
			cin>>d;
			delete_node(n,d);
		}
		else if(k==4)
		{
			int v1,v2;
			cout<<"Input the node";
			cin>>v1;
			cout<<"Input the node:";
			cin>>v2;
			delete_edge(n,v1,v2);
		}
		else if(k==5)
		{
			display(n);
		}
	}
	return 0;
}

