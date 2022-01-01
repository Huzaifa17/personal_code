#include<iostream>
#include<list>
#include<vector>
using namespace std;

class graph2
{
	int node;
	list<int> *ptr;
	public:
	graph2(int n)
	{
		node=n;
	}
	void BFS(int s);
	void create_graph();
};

void graph2::create_graph()
{
	ptr=new list<int>[node];
	int i,j,k;
	for(i=0;i<node;++i)
	{
		cout<<"print the nodes linked with "<<i<<" node"<<endl;
		while(1)
		{
			cin>>k;
			if(k==-1)
			{
				break;
			}
			ptr[i].push_back(k);
		}
	}
	return ;
}

void graph2::BFS(int s)
{
	int i,j,k,n,m;
	list<int> queue;
	vector<int> v;
	bool judge[node];
	queue.push_back(s);
	judge[s]=true;
	while(!queue.empty())
	{
		s=queue.front();
		v.push_back(s);
		queue.pop_front();
		list<int> ::iterator it;
		for(it=ptr[s].begin();it!=ptr[s].end();it++)
		{
			if(!judge[*it])
			{
				queue.push_back(*it);
				judge[*it]=true;
			}
		}
	}
	for(i=0;i<v.size();++i)
	{
		if(i==0)
		{
			cout<<v[i];
		}
		else
		{
			cout<<" "<<v[i];
		}
	}
	cout<<endl;
	/*free(queue);
	free(judge);
	free(v);
	* */
	return ;
}

int main()
{
	int n,i,j,k;
	cin>>n;
	graph2 obj(n);
	obj.create_graph();
	cout<<"Input the central node: "<<endl;
	cin>>k;
	obj.BFS(k);
	return 0;
}
