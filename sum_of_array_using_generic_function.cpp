#include<bits/stdc++.h>
using namespace std;
template<class type>
type summation(type arr[],int n)
{
    int i,j,k;
    type sum=arr[0];
    for(i=1;i<n;++i)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int i,j,n;
    cin>>n;
    double arr[n],k;
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    k=summation(arr,n);
    cout<<"sum: "<<k<<endl;
    return 0;
}
