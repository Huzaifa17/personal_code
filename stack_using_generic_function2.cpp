#include<bits/stdc++.h>
using namespace std;
int sign;
template <class type >
class stack2
{
    int len;
    int pos=0;
    type *array;
    public:
    stack2(int n)
    {
        len=n;
        array=new type [len];
    }
    void push(type a);
    type pop();
};
template <class type>
void stack2<type>::push(type a)
{
    try
    {
        if(pos==len){
            throw len;
        }
    }
    catch(...)
    {
        cout<<"Array extended!!!"<<endl;
        return ;
    }
    array[pos]=a;
    pos++;
}
template <class type>
type stack2<type>::pop()
{
    sign=1;
    pos--;
    try
    {
        if(pos<0){
            throw len;
        }
    }
    catch(int a)
    {
        sign=0;
        cout<<"Array empty!!!"<<endl;
        return array[pos];
    }
    return array[pos];
}

int main()
{
    int i,j,k,n,m;
    char s;
    stack2<char> obj(5);
    obj.push('a');
    obj.push('b');
    obj.push('c');
    obj.push('d');
    obj.push('e');
    obj.push('f');
    for(i=0;i<6;i++){
        s=obj.pop();
        if(sign==1){
            cout<<s<<endl;
        }
    }
    return 0;
}
