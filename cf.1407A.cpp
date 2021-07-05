#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m,c,t,ec,oc,d,de,doo,e1,o1,total;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        int array[n+1];
        e1=0,o1=0,c=0;
        total=0;
        for(j=1;j<=n;j++){
            cin>>array[j];
            if(array[j]==1){
                total++;
            }
        }
        e1=total/2;
        o1=total/2;
        cout<<(n-(total-(e1+o1)))<<endl;
        for(j=1;j<=n;j++){
            if(j%2==0){
                if(array[j]==0){
                    if(c==0){
                        cout<<array[j];
                        c=1;
                    }
                    else{
                        cout<<' '<<array[j];
                    }
                }
                else{
                    if(e1<=0){
                        continue;
                    }
                    e1--;
                    if(c==0){
                        cout<<array[j];
                        c=1;
                    }
                    else{
                        cout<<' '<<array[j];
                    }
                }
            }
            else{
                if(array[j]==0){
                    if(c==0){
                        cout<<array[j];
                        c=1;
                    }
                    else{
                        cout<<' '<<array[j];
                    }
                }
                else{
                    if(o1<=0){
                        continue;
                    }
                    o1--;
                    if(c==0){
                        cout<<array[j];
                        c=1;
                    }
                    else{
                        cout<<' '<<array[j];
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}