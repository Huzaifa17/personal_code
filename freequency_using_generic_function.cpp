#include<bits/stdc++.h>
using namespace std;
template<class type>
type mode(type arr[],int n)
{
    int i,j,k,m;
    type c,x;
    sort(arr,arr+n);
    cout<<"Sequence: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<' ';
    }
    cout<<endl;
    m=1;
    k=1;
    x=arr[0];
    c=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]==x){
            m++;
        }
        else{
            if(m>k){
                c=arr[i-1];
                k=m;
            }
            x=arr[i];
            m=1;
        }
        if(i==n-1){
            if(m>k){
                c=arr[i-1];
            }
        }
    }
    return c;
}
int main()
{
    int i,j,k,n,m;
    cin>>n;
    double arr[n],l;
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    l=mode(arr,n);
    cout<<"Most frequent: "<<l<<endl;
    return 0;
}
