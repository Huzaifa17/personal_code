#include<bits/stdc++.h>
using namespace std;
template<class type>
void sort_type(type arr[],int n)
{
    int i,j,k,m;
    type x,temp;
    for(i=1;i<n;++i)
    {
        j=i-1;
        x=arr[i];
        while (j>=0&&arr[j]>x)
        {
            /* code */
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            j--;
        }
        arr[j+1]=x;
    }
    return ;
}
int main()
{
    int i,j,k,n,m;
    cin>>n;
    double arr[n];
    for(i=0;i<n;++i)
    {
        cin>>arr[i];
    }
    sort_type(arr,n);
    cout<<"After sorting: ";
    for(i=0;i<n;++i)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}
