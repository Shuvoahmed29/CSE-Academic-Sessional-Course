//Write a program to recognize comments and how many letters are in this comments
#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

void recognizeComments(string str){
	int n = str.size();
	int cunt=0,x=1;
	bool ok=false;
	int fast=0,last=0;
	for(int i=0;i<n;i++){
		if(str[i]=='/' && str[i+1] == '/'&&!ok){
			i = i+3;
			cout << "This is a Comment- "<<x++<<endl;;
			ok = true;
			fast=1;
		}
		if(str[i]=='/' && str[i+1] == '*'&&!ok){
			i = i+3;
			cout << "This is a Comment- "<<x++<<endl;;
			ok = true;
			last=1;
		}
		else if(ok) {
			if(str[i]!='/' || str[i]!='*') cunt++;
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
	cout << cunt << endl;
}
int main(){
	code();
	string str,final;
	while(getline(cin,str)){
		if(str=="0") break;
		final +=str+'\n';
	}
	recognizeComments(final);
}
