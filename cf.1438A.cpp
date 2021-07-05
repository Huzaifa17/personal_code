#include<iostream>
using namespace std;
int main()
{
    int i,j,k,t,n,m;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        for(j=0;j<n;j++){
            if(j==0){
                cout<<1;
            }
            else{
                cout<<' '<<1;
            }
        }
        cout<<endl;
    }
    return 0;
}