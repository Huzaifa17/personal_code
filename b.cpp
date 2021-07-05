#include<iostream>
using namespace std;
int main()
{
    int a1,a2,b1,b2,sign,t,n,m,k,i,j;
    cin>>t;
    for(i=0;i<t;i++){
        sign=0;
        cin>>n;
        char s[n][n];
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cin>>s[j][k];
                if(s[j][k]=='*'&&sign==0){
                    a1=j;
                    b1=k;
                    sign=1;
                }
                else if(s[j][k]=='*'&&sign==1){
                    a2=j;
                    b2=k;
                    sign=2;
                }
            }
        }
        if(a1==a2){
            if((a1+1)<n){
                s[a1+1][b1]='*';
                s[a2+1][b2]='*';
            }
            else{
                s[a1-1][b1]='*';
                s[a2-1][b2]='*';
            }
        }
        else if(b1==b2){
            if((b1+1)<n){
                s[a1][b1+1]='*';
                s[a2][b2+1]='*';
            }
            else{
                s[a1][b1-1]='*';
                s[a2][b2-1]='*';
            }
        }
        else{
            s[a2][b1]='*';
            s[a1][b2]='*';
        }
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                cout<<s[j][k];
            }
            cout<<endl;
        }
    }
    return 0;
}