#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n,m,t,c,d,l,r;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        m=n;
        c=0;
        while (m)
        {
            /* code */
            m/=10;
            c++;
        }
        m=n-(c*9);
        c=0;
        for(j=m;j<=n;j++){
            m=j;
            k=0;
            while (m)
            {
            /* code */
                k+=(m%10);
                m/=10;
            }
            if(k+j==n){
                c=1;
                break;
            }
        }
        if(c==1){
            cout<<j<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}