#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,k,m,n,o,p,a,b;
    while (1)
    {
        /* code */
        cin>>a>>b;
        if(a==0&&b==0){
            break;
        }
        if(b>a){
            k=a;
            a=b;
            b=k;
        }
        n=0;
        i=0;
        while (a)
        {
            k=a%10;
            m=b%10;
            if((k+m+i)>9){
                n++;
                i=1;
            }
            else{
                i=0;
            }
            a/=10;
            b/=10;
        }
        if(n==0){
            cout<<"No carry operation."<<endl;
        }
        else if(n==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<n<<" carry operations."<<endl;
        }
    }
    return 0;
}