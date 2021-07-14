#include<bits/stdc++.h>
using namespace std;
class shape
{
    public:
    virtual void get_shape()=0;
};
class rectangel:public shape
{
    public:
    void get_shape()
    {
        cout<<" *****"<<endl ;
        cout<<" *   *"<<endl;
        cout<<" *   *"<<endl;
        cout<<" *****"<<endl;
    }
};

class triangle:public shape
{
    public:
    void get_shape()
    {
        cout<<"    *"<<endl;
        cout<<"   ***"<<endl;
        cout<<"  *****"<<endl;
        cout<<" *******"<<endl;
    }
};

class line:public shape
{
    public:
    void get_shape()
    {
        cout<<" *******"<<endl;
    }
};
class null_shape:public shape
{
    public:
    void get_shape()
    {

    }
};

shape *gen()
{
    switch (rand()%4)
    {
    case /* constant-expression */0:
        return new rectangel;
        /* code */
        break;
    case 1:
        return new triangle;
    case 2:
        return new line; 
    case 3:
        return new null_shape;       
    }
    return 0;
}
int main()
{
    int i,j,k;
    shape *p;
    null_shape *np;
    for(i=0;i<10;++i)
    {
        p=gen();
        np=dynamic_cast<null_shape *>(p);
        if(!np)
        {
            cout<<"class: "<<typeid(*p).name()<<endl;
            p->get_shape();
            cout<<endl;
        }
    }
    return 0;
}
