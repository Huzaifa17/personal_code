#include<bits/stdc++.h>
using namespace std;
void reduce(int array[],int x){
    int len=sqrt(x);
    int i,j,k,m;
    for(i=1;i<=len;i++){
        if(x%i==0){
            array[i]--;
            if((x/i)!=i){
                array[x/i]--;
            }
        }
    }
    return ;
}
int main()
{
    int i,j,k,m,n,x=0,y=0;
    cin>>n;
    int array[10001]={0};
    for(i=1;i<=n;i++){
        cin>>k;
        array[k]++;
        if(k>x){
            x=k;
        }
    }
    reduce(array,x);
    for(i=1;i<=x;i++){
        if(array[i]>0){
            if(i>y){
                y=i;
            }
        }
    }
    cout<<x<<' '<<y<<endl;
    return 0;
}