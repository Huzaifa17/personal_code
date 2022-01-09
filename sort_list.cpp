#include<iostream>
#include<list>
using namespace std;

void sort_lst(list<int> lst)
{
	int i,j,k,n,m,t;
	list<int> ::iterator it,it2,it3;
	//list<int> :: reverse_iterator it2,it3;
	for(it=lst.begin();it!=lst.end();++it)
	{
		if(it==lst.begin())
		{
			continue;
		}
		k=*it;
		it2=it;
		--it2;
		it3=it;
		while(it3!=lst.begin()&&(*it2)>k)
		{
			*it3=*it2;
			it2--;
			it3--;
		}
		*it3=k;
	}
	for(it=lst.begin();it!=lst.end();++it)
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	return ;
}

int main()
{
	int i,j,k,n;
	cin>>n;
	list<int> lst;
	k=50;
	for(i=0;i<n;++i,k--)
	{
		lst.push_back(k);
	}
	sort_lst(lst);
	return 0;
}
