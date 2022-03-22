#include<bits/stdc++.h>
using namespace std;

int parent[1001];
int level[1001];

void print(int n,int src)
{
    while(src!=n)
    {
        cout<<n<<" <- ";
        n=parent[n];
    }
    cout<<n<<endl;
}

void bfs(list<pair<int,int>> graph[],int n,int src)
{
    int i,j,k,m;
    list<int> q;
    for(i=0;i<n;++i)
    {
        parent[i]=i;
        level[i]=INT_MAX;
    }
    q.push_back(src);
    level[src]=0;
    while(!q.empty())
    {
        int node=q.front();
        q.pop_front();
        for(auto& it: graph[node])
        {
            int adj,w;
            adj=it.first;
            w=it.second;
            if(level[node]+w<level[adj])
            {
                level[adj]=level[node]+w;
                parent[adj]=node;
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
    for(i=0;i<n;++i)
    {
        print(i,src);
    }
    return ;
}

int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int n,i,j,k,m,t,src;
    cin>>n;
    list<pair<int,int>> graph[n];
    for(i=0;i<n;++i)
    {
        cout<<"node: "<<i<<endl;
        while(1)
        {
            cout<<"edge:";
            cin>>m;
            if(m==-1)
            {
                break;
            }
            cout<<"val:";
            cin>>k;
            graph[i].push_back({m,k});
        }
    }
    cout<<"graph: "<<endl;
    for(i=0;i<n;++i)
    {
        cout<<i<<" ->";
        for(auto& it:graph[i])
        {
            cout<<"node:  "<<it.first<<" edge: "<<it.second;
        }
        cout<<endl;
    }
    cin>>src;
    bfs(graph,n,src);
    return 0;
}
