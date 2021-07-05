#include<iostream>
using namespace std;
int main()
{
    int i,j,t;
    cin>>t;
    for(i=0;i<t;i++){
        long long int n,sum,sub=0,m=1;
        cin>>n;
        sum=((n*(n+1))/2);
        while(m<=n){
            sub+=(m);
            m=m*2;
        }
        sum=sum-(2*sub);
        cout<<sum<<endl;
    }
    return 0;
}