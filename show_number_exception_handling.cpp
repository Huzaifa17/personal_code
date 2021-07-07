#include<bits/stdc++.h>
using namespace std;
//exception handling
template <class type>
void sent(type a)
{
    if(a==(type(0))){
        cout<<"Value is Zero"<<endl;
    }
    else{
        throw a;
    }
}
template <class type>
void show(type a)
{
    try
    {
        sent(a);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(type a)
    {
        cout<<"Value: "<<a<<endl;
    }
}
int main()
{
    int a,b;
    cin>>a;
    show(a);
    double c;
    cin>>c;
    show(c);
}
