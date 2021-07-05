#include<bits/stdc++.h>
using namespace std;
class  result
{
private:
    char s1,s2;
    char name[50];
    char roll[50];
    double res;
public:
    void input_info();
    void input_res(int arr[],int n);
    void output();
};
class student
{
private:
    int array[4];
    result a;
public:
    void input();
    void show();
    ~student();
};

student::~student()
{
    free(array);
}
void result::input_res(int arr[],int n){
    cout<<"Input the student name: ";
    s1=getchar();
    cin.getline(name,50);
    cout<<"Input the id: ";
    s2=getchar();
    cin.getline(roll,50);
    int i,j,sum=0;
    for(i=0;i<n;i++){
        sum+=(arr[i]);
    }
    cout<<"Sum: "<<sum<<endl;
    res=((double)sum)/(n);
    return ;
}
void result::output(){
    cout<<"Name: "<<s1<<name;
    cout<<endl<<"ID: "<<s2<<roll<<endl;
    cout<<"GPA: "<<res<<endl;
}
void student::input(){
    cout<<"Input GPA(Out Of Five): ";
    for(int i=0;i<4;i++){
        cin>>array[i];
    }
    a.input_res(array,4);
    return;
}
void student::show(){
    a.output();
    return;
}
int main()
{
    student obj;
    obj.input();
    obj.show();
    return 0;
}
