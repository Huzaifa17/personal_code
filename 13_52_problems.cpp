#include<bits/stdc++.h>
using namespace std;
void reverse(char word[])
{
	int i,l=strlen(word);
	for(i=l-1;i>=0;i--)
	{
		cout<<word[i];
	}
	//cout<<endl;
}
int main()
{
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	int n,i,j,k,m,t;
	cin>>t;
	cin.ignore();
	for(i=0;i<t;++i)
	{
		string s;
		std::vector<char *> v;
		getline(cin,s);
		//cout<<s<<endl;
		int c=0;
		char word[500];
		int id=0;
		for(j=0;s[j]!='\0';++j)
		{
			if((s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z'))
			{
				c=1;
				if(s[j+1]=='\0')
				{
					word[id]=s[j];
					id++;
					word[id]='\0';
					reverse(word);
				}
			}
			else
			{
				if(c==1)
				{
					word[id]='\0';
					//v.push_back(word);
					reverse(word);
					id=0;
				}
				c=0;
				cout<<s[j];
			}
			if(c==1)
			{
				word[id]=s[j];
				id++;
			}
		}
		cout<<endl;
	}
	return 0;
}
