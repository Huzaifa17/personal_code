#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,x1,y1,x2,y2,res;
    double dis;
    cin>>r>>x1>>y1>>x2>>y2;
    long long int d;
    d=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    dis=sqrt(d);
    r*=2;
    res=(dis/r);
    dis=(dis/r);
    if(dis!=res){
        res++;
    }
    cout<<res<<endl;
    return 0;
}