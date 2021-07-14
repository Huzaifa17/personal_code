#include<bits/stdc++.h>
using namespace std;
class B
{
virtual void f () {}
};
class D1 : public B
{
void f () {}
};
class D2 : public B
{
void f () {}
};
int main()
{
    B *p;
    int i,j,k;
    D2 ob,*q=&ob;
    p=dynamic_cast<B *> (q);
    cout<<"Class : "<<typeid(*p).name()<<endl;
    return 0;
}
