#include<bits/stdc++.h>
using namespace std;

bool bfs(list<int> graph[],int n)
{
    int i,j,k,m;
    int visited[n]={0};
    //list<int> q;
    std::vector<int> parent(n,-1);
    for(i=0;i<n;++i)
    {
        if(!visited[i])
        {
            //int sz=graph[i].size();
            visited[i]=1;
            list<int> q;
            q.push_back(i);
            while(!q.empty())
            {
                int node=q.front();
                q.pop_front();
                for(auto& it: graph[node])
                {
                    if(!visited[it])
                    {
                        q.push_back(it);
                        visited[it]=1;
                        parent[it]=node;
                    }
                    else if(parent[node]!=it)
                    {
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t;
    cin>>n;
    list<int> graph[n];
    for(i=0;i<n;++i)
    {
        cout<<"node: "<<i<<endl;
        while(1)
        {
            cin>>m;
            if(m==-1)
            {
                break;
            }
            graph[i].push_back(m);
        }
    }
    for(i=0;i<n;++i)
    {
        cout<<"node: "<<i;
        for(auto& it:graph[i])
        {
            cout<<" -> "<<it;
        }
        cout<<endl;
    }
    if(bfs(graph,n))
    {
        cout<<"Cycle"<<endl;
    }
    else
    {
        cout<<"No cycle"<<endl;
    }
    return 0;
}
