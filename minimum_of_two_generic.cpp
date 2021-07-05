#include<bits/stdc++.h>
using namespace std;
template < class t >
t min2(t a,t b)
{
    if(a<=b)
    {
        return a;
    }
    return b;
}
/*template < class type1  >
void min2 ( type1 x , type1 y )
{
cout << x << ' ' << y << endl ;
}
*/
int main()
{
    int a,b;
    cin>>a>>b;
    //min2(a,b);
    cout<<"Minimum: "<<min2(a,b)<<endl;
    char c,d;
    cin>>c>>d;
    //min2(c,d);
    cout<<"Minimum: "<<min2(c,d)<<endl;
    double n,m;
    cin>>n>>m;
    //min2(n,m);
    cout<<"Minimum: "<<min2(n,m)<<endl;
    return 0;
}
