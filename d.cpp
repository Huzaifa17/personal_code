#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,t,m,n,sum,o,t,sum1,sum2;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int array[n],arr[n+2];
        sum=0;
        for(j=0;j<(n+2);j++){
            cin>>arr[j];
            sum+=(arr[j]);
        }
        sort(arr,arr+(n+2));
        sum1=sum-(arr[n]+arr[n+1]);
        if(sum1==arr)
    }
}