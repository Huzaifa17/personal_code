#include<bits/stdc++.h>
using namespace std;
template<class type>
class list2
{
private:
    /* data */
    list2 *next=0;
    type value;
public:
    list2(type a);
    type get_value()
    {
        return value;
    }
    void get_next(list2 *pointer){
        pointer->next=this;
        next=0;
    }
    list2 *return_next()
    {
        return next;
    } 
};
template<class type>
list2<type>::list2(type a)
{
    value=a;
}

int main()
{
    int i,j,k;
    list2<char> *p;
    list2<char>*start;
    list2<char>*last;
    start = new list2<char> ('a');
    last=start;
    for(i=1;i<26;++i)
    {
        p= new list2<char> ('a'+i);
        p->get_next(last);
        last=p;
    }
    p=start;
    while (p)
    {
        /* code */
        cout<<p->get_value()<<endl;;
        p=p->return_next();
    }
    cout<<endl;
    return 0;
}
