#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m=0,t,c=0,l;
    cin>>n>>k;
    int array[n];
    for(i=0;i<n;i++){
        cin>>array[i];
    }
    for(i=0;i<n;i++){
        if(array[i]>k){
            c=1;
            break;
        }
        else{
            m++;
        }
    }
    if(c==1){
    for(i=n-1;i>=0;i--){
        if(array[i]>k){
            break;
        }
        else{
            m++;
        }
    }
    }
    cout<<m<<endl;
    return 0;
}