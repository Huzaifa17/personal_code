#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n,t,count;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n;
        char s[n+10];
        cin>>s;
        count=0;
        for(j=n-1;j>=0;j--){
            if(s[j]==')'){
                count++;
            }
            else{
                break;
            }
        }
        if(count>(n/2)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}