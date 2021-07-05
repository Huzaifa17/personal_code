#include<iostream>
using namespace std;
int main()
{
    int i,j,c,n,k,t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        c=0;
        for(j=0;j<n;j++){
            if(c==0){
                cout<<'a';
                c=1;
            }
            else if(c==1){
                cout<<'b';
                c=2;
            }
            else{
                cout<<'c';
                c=0;
            }
        }
        cout<<endl;
    }
    return 0;
}