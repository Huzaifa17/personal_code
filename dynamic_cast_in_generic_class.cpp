#include<bits/stdc++.h>
using namespace std;
template<class type>
class base
{
    public:
    type n;
    virtual type get_val(){
        return n;
    }
    base(type x);
};
template<class type>
base<type>::base(type x)
{
    n=x;
}
template<class type>
class square:public base<type>
{
    public:
    square(type n):base<type>(n){}
    type get_val()
    {
        return (this->n*this->n);
    }
};

template<class type>
class square_root:public base<type>
{
    public:
    square_root(type n):base<type>(n){}
    type get_val()
    {
        return sqrt((double)(this->n));
    }
};

base<double> *gen()
{
    switch (rand()%2)
    {
    case /* constant-expression */0:
        /* code */
        return new square<double> (rand()%100);
        break;
    case 1:
        return new square_root<double> (rand()%100);
    default:
        break;
    }
    return 0;
}

int main()
{
    int i,j,k;
    base<double> *pb;
    square_root<double> *psr;
    square<double> *ps;
    for(i=0;i<5;++i){
        pb=gen();
        psr=dynamic_cast<square_root<double> *> (pb);
        if(psr)
        {
            cout<<"Class: "<<typeid(*psr).name()<<endl;
        }
        ps=dynamic_cast<square<double> *> (pb);
        if(ps)
        {
            cout<<"Class: "<<typeid(*ps).name()<<endl;
        }
        cout<<"Value: "<<pb->get_val()<<endl;
    }
}
