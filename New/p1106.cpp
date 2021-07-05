#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100];
    int i,j,k,sum,total,t;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>s;
        sum=0;
        total=0;
        for(j=0;s[j]!='\0';j++){
            if(s[j]=='X'){
                sum=0;
            }
            else{
                sum++;
                total+=sum;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}