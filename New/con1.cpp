#include<iostream>
using namespace std;
int main()
{
    int i,j,n,k,bottle,sum,array[4]={2,8,26,80};
    cin>>n;
    sum=n;
    bottle=n;
    for(i=0;i<4;i++){
        if(array[i]==bottle){
            bottle++;
            break;
        }
    }
    while (bottle>=3)
    {
        sum+=(bottle/3);
        k=bottle%3;
        bottle/=3;
        bottle+=k;
    }
    cout<<sum<<endl;
    return 0;
}