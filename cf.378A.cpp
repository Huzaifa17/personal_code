#include<iostream>
using namespace std;
int main(){
    int a,b,dis1,dis2,w1=0,w2=0,d=0,i,j=0;
    cin>>a>>b;
    /*defaults incomplete*/
    for(i=1;i<=6;i++){
        if(i>a){
            dis1=i-a;
        }
        else{
            dis1=a-i;
        }
        if(i>b){
            dis2=i-b;
        }
        else{
            dis2=b-i;
        }
        if(dis1<dis2){
            w1++;
        }
        else if(dis2<dis1){
            w2++;
        }
        else{
            d++;
        }
    }
    cout<<w1<<' '<<d<<' '<<w2<<endl;
    return 0;
}