#include<bits/stdc++.h>
using namespace std;

int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int n,k,m,t;
	list<int> lst{5,8,9,7,50,14,15};
	list<int> :: iterator i,j;
    //lst
    /*if(lst.empty())
    {
    	cout<<"List is empty"<<endl;
    }
    else
    {
    	cout<<"List is not empty"<<endl;
    }*/
    //i=lst.rbegin();
    //cout<<*i<<endl;
    i=lst.begin();
    cout<<*i<<endl;
    i++;
    lst.insert(i,3,17);
    /*for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }*/
    i=lst.begin();
    i++;
    j=i;
    j++;
    j++;
    lst.erase(i,j);
    //cout<<endl;
    //lst.assign(5,10);
    //lst.remove(10);
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    lst.reverse();
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"size: "<<lst.size()<<endl;
    lst.sort();
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    i=lst.begin();
    i++;
    i++;
    i++;
    i++;
    lst.insert(i,3,15);
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    cout<<"size: "<<lst.size()<<endl;
    lst.sort();
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    lst.unique();
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
    lst.clear();
    for(i=lst.begin();i!=lst.end();i++)
    {
    	cout<<*i<<" ";
    }
    cout<<endl;
	return 0;
}
