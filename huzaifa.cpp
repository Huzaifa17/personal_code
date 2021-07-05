#include<iostream>
#include<cstdlib>
using namespace std;
class try1
{
private:
    int a;
    int b;
    static int count;
public:
    try1(int m,int n);
    ~try1();
    static int show();
    int area();
};
int try1::count=0;
try1::try1(int m,int n)
{
    a=m;
    b=n;
    count++;
}

try1::~try1()
{
    free(&a);
    free(&b);
}
int try1::show(){
    return count;
}

int try1::area()
{
    return (a*b);
}

int main()
{
    int a,b;
    cin>>a>>b;
    try1 ob(a,b);
    cout<<"Number of Object: "<<ob.show()<<" the area: "<<ob.area()<<endl;
    return 0;
}