#include<bits/stdc++.h>
using namespace std;
bool subsequence(string big,string small)
{
    int j=0;
    for(int i=0;big[i]!='\0'&&small[j]!='\0';++i)
    {
        if(big[i]==small[j])
        {
            j++;
        }
    }
    if(small[j]=='\0')
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s,s2;
    int i,j,k,n,m,count=0;
    cout<<"Input the string1: "<<endl;
    getline(cin,s);
    cout<<"Input the string2 : "<<endl;
    cin>>ws;
    getline(cin,s2);
    char ch='"';
    if(subsequence(s,s2))
    {
        cout<<"Yes,string 2 is a subsequence of string 1"<<endl;
    }
    else
    {
        cout<<"No,string 2 is not a subsequence of string 1"<<endl;
    }
    return 0;
}
