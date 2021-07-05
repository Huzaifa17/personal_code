#include<iostream>
using namespace std;
class new1
{
private:
    int wide;
    int length;
public:
    new1(int a,int b);
    friend void show_var(new1 ob);
    int show();
};
 new1::new1(int a,int b)
{
    length=a;
    wide=b;
}
 int new1::show()
{
    return (wide*length);
}
void show_var(new1 ob){
    cout<<"Wide: "<<ob.wide<<" Length: "<<ob.length<<endl;
    return ;
}
int main()
{
    cout<<"Input length and wide:"<<endl;
    int a,b;
    cin>>a>>b;
    new1 ob(a,b);
    show_var(ob);
    cout<<"Area: "<<ob.show()<<endl;
    return 0;
}
