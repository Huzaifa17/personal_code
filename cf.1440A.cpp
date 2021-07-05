#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,m,t,c0,c1,d,nc1,nc2,h,total;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>c0>>c1>>h;
        char s[n+50];
        cin>>s;
        nc1=0;
        nc2=0;
        total=0;
        for(j=0;j<n;j++){
            if(s[j]=='0'){
                nc1++;
            }
            else{
                nc2++;
            }
        }
        if(c1>c0){
            d=c1-c0;
            if(d>h){
                total=(nc2*h)+(c0*n);
            }
            else{
                total=(nc1*c0)+(nc2*c1);
            }
        }
        else{
            d=c0-c1;
            if(d>h){
                total=(nc1*h)+(c1*n);
            }
            else{
                total=(nc1*c0)+(nc2*c1);
            }
        }
        cout<<total<<endl;
    }
    return 0;
}