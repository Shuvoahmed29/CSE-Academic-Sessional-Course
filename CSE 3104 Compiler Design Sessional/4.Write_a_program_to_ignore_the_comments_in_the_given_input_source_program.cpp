//Write a program to ignore the comments in the given input source program
#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void ignoreComments(string str){
	int n = str.size();
	bool ok=false;
	int fast=0,last=0;
	for(int i=0;i<n;i++){
		if(str[i]=='/' && str[i+1] == '/'&&!ok){
			i = i+2;
			ok = true;
			fast=1;
		}
		if(str[i]=='/' && str[i+1] == '*'&&!ok){
			i = i+2;
			ok = true;
			last=1;
		}
		if(ok) {
			if(str[i]=='\n' && fast==1) {
				ok = false;
				fast=0;
			}
			else if(str[i]=='/'&&last==1) {
				ok=false;
				last=0;
			}
			continue;
		}
		if(!ok)cout << str[i];
	}
}
int main(){
	code();
	string str,final;
	bool ok = false;
	while(getline(cin,str)){
		if(str=="0") break;
		final +=str+'\n';
	}
	ignoreComments(final);
}
