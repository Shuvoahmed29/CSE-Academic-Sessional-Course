//Write a program to recognize identifiers.

#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
bool isValid(string str){
	if((str[0]>='a'&&str[0]<='z')||(str[0]>='A' && str[0]<='Z') ||str[0]=='_'){
		for(int i=1;i<str.size();i++){
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z') ||str[i]=='_'|| (str[i]>='0'&&str[i]<='9'));
			else return false;
		}
	}
	else return false;
	return true;
}
int main(){
	code();
	string str;
	while(getline(cin,str)){
		if(str=="0") break;
		bool ok=isValid(str);
		if(ok) cout << "Valid identifier!\n";
		else cout << "Invalid identifier!\n";
	}
}

