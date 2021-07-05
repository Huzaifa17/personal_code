#include<iostream>
using namespace std;
int main()
{
    unsigned long long int n;
    cin>>n;
    n=((n*(n+1))/2);
    if(n%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}