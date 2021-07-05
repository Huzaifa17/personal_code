#include<iostream>
using namespace std;
int main()
{
    long long int n,m;
    cin>>n>>m;
    n=(n/m);
    if(n%2==0){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}