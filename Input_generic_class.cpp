#include<bits/stdc++.h>
using namespace std;
//building the input generic class
template <class type1>
class input
{
    type1 n;
    public:
    input(string s,type1 min,type1 max);
    type1 show();
};

template <class type1>
input<type1>::input(string s,type1 min,type1 max)
{
    do
    {
        /* code */
        cout<<s<<" :";
        cin>>n;
    } while (n<min||n>max);
}

template <class type1>
type1 input<type1>::show()
{
    return n;
}

int main()
{
    int i,j,k,n,m;
    input<int> ob("Input a number",10,100);
    cout<<"The number: "<<ob.show()<<endl;
    input<char> obj("Input a character",'a','z');
    cout<<"The alphabet: "<<obj.show()<<endl;
}
