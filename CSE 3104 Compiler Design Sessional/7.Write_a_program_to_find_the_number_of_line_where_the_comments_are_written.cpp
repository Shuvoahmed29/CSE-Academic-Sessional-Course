//Write a program to find the number of line where the comments are written.
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
	bool ok=false;
	int fast=0,last=0,cunt=1;
	for(int i=0;i<n;i++){
		if(str[i]=='\n') cunt++;
		if(str[i]=='/' && str[i+1] == '/'&&!ok){
			i = i+3;
			cout << "Single line Comment line: " <<cunt << endl;
			ok = true;
			fast=1;
		}
		if(str[i]=='/' && str[i+1] == '*'&&!ok){
			i = i+3;
			cout << "Multiline Comment line: " <<cunt;
			ok = true;
			last=1;
		}
		else if(ok) {
			if(str[i]=='\n' && fast==1) {
				ok = false;
				fast=0;
			}
			else if(str[i]=='/'&&last==1) {
				ok=false;
				last=0;
				cout << " to "<<cunt << endl;
			}
			continue;
		}
		if(!ok)cout << str[i];
	}
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
