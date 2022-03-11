#include<bits/stdc++.h>
using namespace std;

#define MAX 100
int level[MAX];
int previous[MAX];
int save;

void bfs(pair<int,pair<int,int>> start,pair<int,pair<int,int>> destination)
{
	list<pair<int,pair<int,int>>> queue;
	std::map<pair<int,int>, int> visited;
    map<pair<int,int>,int> :: iterator it;
	visited[start.second]=1;
	level[start.first]=0;
	previous[start.first]=-1;
	queue.push_back(start);
	int num=2;
	//int save;
	while(!queue.empty())
	{
		pair<int,pair<int,int>> a1,a2,a3,a4,a5,a6,a7,a8,node=queue.front();
		cout<<endl;
		cout<<endl;
		//cout<<" new node: "<<node.first<<" "<<node.second.first<<" "<<node.second.second<<endl;
		queue.pop_front();
		for(int i=0;i<8;++i)
		{
			if((node.second.first+1)>=1&&(node.second.first+1)<=8&&(node.second.second+2)>=1&&(node.second.second+2)<=8)
			{
				a1={num,{node.second.first+1,node.second.second+2}};
				if(!visited[a1.second])
				{
					queue.push_back(a1);
					level[a1.first]=level[node.first]+1;
					previous[a1.first]=node.first;
					visited[a1.second]=1;
					if(destination.second.first==a1.second.first&&destination.second.second==a1.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a1: "<<a1.first<<" cord: "<<a1.second.first<<" "<<a1.second.second<<" prevois: "<<node.first<<endl;
				}
			}
			if((node.second.first+1)>=1&&(node.second.first+1)<=8&&(node.second.second-2)>=1&&(node.second.second-2)<=8)
			{
				a2={num,{node.second.first+1,node.second.second-2}};
				if(!visited[a2.second])
				{
					queue.push_back(a2);
					level[a2.first]=level[node.first]+1;
					previous[a2.first]=node.first;
					visited[a2.second]=1;
					if(destination.second.first==a2.second.first&&destination.second.second==a2.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a2: "<<a2.first<<" cord: "<<a2.second.first<<" "<<a2.second.second<<" prevois: "<<node.first<<endl;
				}
			}
			if((node.second.first+2)>=1&&(node.second.first+2)<=8&&(node.second.second+1)>=1&&(node.second.second+1)<=8)
			{
				a3={num,{node.second.first+2,node.second.second+1}};
				if(!visited[a3.second])
				{
					queue.push_back(a3);
					level[a3.first]=level[node.first]+1;
					previous[a3.first]=node.first;
					visited[a3.second]=1;
					if(destination.second.first==a3.second.first&&destination.second.second==a3.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a3: "<<a3.first<<" cord: "<<a3.second.first<<" "<<a3.second.second<<" prevois: "<<node.first<<endl;
				}
			}
			if((node.second.first+2)>=1&&(node.second.first+2)<=8&&(node.second.second-1)>=1&&(node.second.second-1)<=8)
			{
				a4={num,{node.second.first+2,node.second.second-1}};
				if(!visited[a4.second])
				{
					queue.push_back(a4);
					level[a4.first]=level[node.first]+1;
					previous[a4.first]=node.first;
					visited[a4.second]=1;
					if(destination.second.first==a4.second.first&&destination.second.second==a4.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a4: "<<a4.first<<" cord: "<<a4.second.first<<" "<<a4.second.second<<" prevois: "<<node.first<<endl;
				}
			}
			if((node.second.first-1)>=1&&(node.second.first-1)<=8&&(node.second.second+2)>=1&&(node.second.second+2)<=8)
			{
				a5={num,{node.second.first-1,node.second.second+2}};
				if(!visited[a5.second])
				{
					queue.push_back(a5);
					level[a5.first]=level[node.first]+1;
					previous[a5.first]=node.first;
					visited[a5.second]=1;
					if(destination.second.first==a5.second.first&&destination.second.second==a5.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a5: "<<a5.first<<" cord: "<<a5.second.first<<" "<<a5.second.second<<" prevois: "<<node.first<<endl;
				}
			}
			if((node.second.first-1)>=1&&(node.second.first-1)<=8&&(node.second.second-2)>=1&&(node.second.second-2)<=8)
			{
				a6={num,{node.second.first-1,node.second.second-2}};
				if(!visited[a6.second])
				{
					queue.push_back(a6);
					level[a6.first]=level[node.first]+1;
					previous[a6.first]=node.first;
					visited[a6.second]=1;
					if(destination.second.first==a6.second.first&&destination.second.second==a6.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a6: "<<a6.first<<" cord: "<<a6.second.first<<" "<<a6.second.second<<endl;
				}
			}
			if((node.second.first-2)>=1&&(node.second.first-2)<=8&&(node.second.second+1)>=1&&(node.second.second+1)<=8)
			{
				a7={num,{node.second.first-2,node.second.second+1}};
				if(!visited[a7.second])
				{
					queue.push_back(a7);
					level[a7.first]=level[node.first]+1;
					previous[a7.first]=node.first;
					visited[a7.second]=1;
					if(destination.second.first==a7.second.first&&destination.second.second==a7.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a7: "<<a7.first<<" cord: "<<a7.second.first<<" "<<a7.second.second<<endl;
				}
			}
			if((node.second.first-2)>=1&&(node.second.first-2)<=8&&(node.second.second-1)>=1&&(node.second.second-1)<=8)
			{
				a8={num,{node.second.first-2,node.second.second-1}};
				if(!visited[a8.second])
				{
					queue.push_back(a8);
					level[a8.first]=level[node.first]+1;
					previous[a8.first]=node.first;
					visited[a8.second]=1;
					if(destination.second.first==a8.second.first&&destination.second.second==a8.second.second)
					{
						save=num;
					}
					num++;
					//cout<<"a8: "<<a8.first<<" cord: "<<a8.second.first<<" "<<a8.second.second<<endl;
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
	cin>>i>>j;
	pair<int,pair<int,int>> horse{1,{i,j}};
	cin>>i>>j;
	pair<int,pair<int,int>> king{2,{i,j}};
	bfs(horse,king);
	k=save;
	cout<<"step: "<<level[save]<<endl;
	return 0;
}
