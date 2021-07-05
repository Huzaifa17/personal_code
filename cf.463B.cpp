#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    int array[n],i;
    for(i=0;i<n;i++){
        cin>>array[i];
        if(array[i]>max){
            max=array[i];
        }
    }
    cout<<max<<endl;
    return 0;
}