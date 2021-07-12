#include<bits/stdc++.h>
using namespace std;
template <class type>
class num
{
    public:
    type n;
    num(type x)
    {
        n=x;
    }
    virtual type get_val()
    {
        return n;
    }
    type get_n()
    {
        return n;
    }
};

template<class type>
class square:public num<type>
{
    public:
    square(type n):num<type>(n){}
    type get_val();
};
template <class type>
type square<type>::get_val()
{
    return (this->get_n()*this->get_n());
}

template<class type>
class square_root:public num<type>
{
    public:
    square_root(type n):num<type>(n){}
    type get_val();
};
template <class type>
type square_root<type>::get_val()
{
    return (sqrt((double)this->n));
}

int main()
{
    int i,j,k;
    num<double> *base_po,obj1(20.50);
    base_po=&obj1;
    square<double> obj2(25.25);
    square_root<double> obj3(36.000);
    cout<<"Class: "<<typeid(*base_po).name()<<endl;
    cout<<"Value: "<<base_po->get_val()<<endl;
    base_po=&obj2;
    cout<<"Class: "<<typeid(*base_po).name()<<endl;
    cout<<"Value: "<<base_po->get_val()<<endl;
    base_po=&obj3;
    cout<<"Class: "<<typeid(*base_po).name()<<endl;
    cout<<"Value: "<<base_po->get_val()<<endl;
    return 0;
}
