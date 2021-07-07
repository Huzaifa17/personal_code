#include<bits/stdc++.h>
using namespace std;
int signal1;
template <class type>
type dividation(type a,type b)
{
    signal1=1;
    type res;
    try
    {
        if(b==((type)0))
        {
            throw b;
        }
        if(((a>='0'&&a<='9')||(a>='a'&&a<='z')||(a>='A'&&a<='Z'))||((b>='0'&&b<='9')||(b>='a'&&b<='z')||(b>='A'&&b<='Z'))){
            throw b;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(type b)
    {
        cout<<"Undifined!!!!"<<endl;
        signal1=0;
    }
    res=a/b;
    return res;
}
int main()
{
    int a,b;
    cin>>a>>b;
    a=dividation(a,b);
    if(signal1){
        cout<<"Dividation: "<<a<<endl;
    }
    double c,d;
    cin>>c>>d;
    c=dividation(c,d);
    if(signal1){
        cout<<"Dividation: "<<c<<endl;
    }
    char m,n;
    cin>>m>>n;
    m=dividation(m,n);
    if(signal1){
        cout<<"Dividation: "<<m<<endl;
    }
}
