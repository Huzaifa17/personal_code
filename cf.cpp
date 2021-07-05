#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,t,m,s1,s2,ans;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int arr[n],arr1[101]={0};
        for(j=0;j<n;j++){
            cin>>k;
            arr[j]=k;
            arr1[k]++;
        }
        for(j=1;j<101;j++){
            if(arr1[j]==1){
                ans=j;
                break;
            }
        }
        for(j=0;j<n;j++){
            if(arr[j]==ans){
                cout<<j+1<<endl;
                break;
            }
        }
    }
    return 0;
}