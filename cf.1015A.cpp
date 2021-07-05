#include<iostream>
using namespace std;
int main()
{
    int i,j,k,m,n,c=0,sign=0,t,a,b;
    cin>>n>>m;
    int array[m+1]={0};
    for(i=0;i<n;i++){
        cin>>a>>b;
        for(j=a;j<=b;j++){
            array[j]++;
        }
    }
    for(i=1;i<=m;i++){
        if(array[i]==0){
            c++;
        }
    }
    if(c==0){
        sign=1;
    }
    cout<<c<<endl;
    if(sign==0){
        for(i=1;i<=m;i++){
            if(array[i]==0){
                if(sign==0){
                    cout<<i;
                    sign=1;
                }
                else{
                    cout<<' '<<i;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}