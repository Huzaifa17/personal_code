#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,n,m,base,t,sign,c;
	cin>>t;
	for(i=0;i<t;i++){
		cin>>n>>m;
		char s[n+5][m+5];
		for(j=0;j<n;j++){
			cin>>s[j];
		}
		base=1;
		c=0;
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(s[j][k]=='R'){
					if((j%2==0&&k%2==0)||(j%2!=0&&k%2!=0)){
						c=1;
						break;
					}
					else{
						c=1;
						base++;
						break;
					}
				}
				if(s[j][k]=='W'){
					if((j%2==0&&k%2==0)||(j%2!=0&&k%2!=0)){
						base++;
						c=1;
						break;
					}
					else{
						c=1;
						break;
					}
				}
			}
			if(c==1){
				break;
			}
		}
		c=0;
		sign=0;
		for(j=0;j<n;j++){
			for(k=0;k<m;k++){
				if(base==1){
					if((j%2==0&&k%2==0)||(j%2!=0&&k%2!=0)){
						if(s[j][k]=='.'){
							s[j][k]='R';
						}
						else if(s[j][k]=='R'){
							continue;
						}
						else{
							c=1;
							sign=1;
							break;
						}
					}
					else{
						if(s[j][k]=='.'){
							s[j][k]='W';
						}
						else if(s[j][k]=='W'){
							continue;
						}
						else{
							c=1;
							sign=1;
							break;
						}
					}
				}
				else{
					if((j%2==0&&k%2==0)||(j%2!=0&&k%2!=0)){
						if(s[j][k]=='.'){
							s[j][k]='W';
						}
						else if(s[j][k]=='W'){
							continue;
						}
						else{
							c=1;
							sign=1;
							break;
						}
					}
					else{
						if(s[j][k]=='.'){
							s[j][k]='R';
						}
						else if(s[j][k]=='R'){
							continue;
						}
						else{
							c=1;
							sign=1;
							break;
						}
					}
				}
			}
			if(c==1){
				break;
			}
		}
		if(sign==1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			for(j=0;j<n;j++){
				cout<<s[j]<<endl;
			}
		}
	}
	return 0;
}