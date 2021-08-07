#include<bits/stdc++.h>
using namespace std;
bool is_there(int n,string s,string s2)
{
    int i,j;
    for(i=n,j=0;s[j]!='\0'&&s2[i]!='\0';++i,++j)
    {
        if(s[j]!=s2[i])
        {
            return 0;
        }
    }
    if(s[j]=='\0')
    {
        return 1;
    }
    return 0;
}
int main()
{
    string s,s2;
    int i,j,k,n,m,count=0;
    cout<<"Input the string: "<<endl;
    getline(cin,s);
    cout<<"Input the string to be searched: "<<s2<<endl;
    cin>>ws;
    getline(cin,s2);
    char ch='"';
    if(s.find(s2)!=-1)
    {
        for(i=0;s[i]!='\0';++i)
        {
            if(s[i]==s2[0])
            {
                if(is_there(i,s2,s))
                {
                    count++;
                }
            }
        }
        cout<<"Yes: "<<ch<<s2<<ch<<" is present in "<<ch<<s<<ch<<endl;
        cout<<"Times: "<<count<<endl;
    }
    else
    {
        cout<<"No: "<<ch<<s2<<ch<<" is not present in "<<ch<<s<<ch<<endl;
        cout<<"Times: "<<count<<endl;
    }
    return 0;
}
