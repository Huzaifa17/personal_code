#include<iostream>
using namespace std;
int main()
{
    int i,j,t;
    cin>>t;
    for(i=0;i<t;i++){
        int n;
        long long int k;
        cin>>n>>k;
        long int array[n],max=-1000000009,max2=-1000000009;
        for(j=0;j<n;j++){
            cin>>array[j];
            if(array[j]>max){
                max=array[j];
            }
        }
        if(k%2==0){
            for(j=0;j<n;j++){
                array[j]=(max-array[j]);
                if(array[j]>max2){
                    max2=array[j];
                }
            }
            max=max2;
        }
        for(j=0;j<n;j++){
            array[j]=(max-array[j]);
            if(j==0){
                cout<<array[j];
            }
            else{
                cout<<' '<<array[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
