#include<bits/stdc++.h>
using namespace std;
int main()
{
    string date;
    int arr[3]={0},i=0,j=0,k=0;
    cout<<"Input the date: ";
    getline(cin,date);
    while (date[i]!='\0')
    {
        /* code */
        if(date[i]<'0'||date[i]>'9')
        {
            if(k==1)
            {
                j++;
            }
            k=0;
            ++i;
            continue;
        }
        arr[j]=arr[j]*10+(date[i]-48);
        k=1;
        ++i;
    }
    char s[12][10]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    cout<<"The date: "<<arr[0]<<' '<<s[arr[1]-1]<<' '<<arr[2]<<endl;
    return 0;
}
