//Write a program to recognize constants
#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
set<int>st;
bool isOperator(char ch){
	if(ch=='+'||ch=='-'||ch=='*'||ch=='/' || ch=='='||ch=='>'||ch=='<') 
		return true;
	return false;
}
void allConstants(string str){
	for(int i=0;i<str.size();i++){
		int sign=-1;
		if(isOperator(str[i])){
			string temp;
			sign=i;
			for(int j=i+1;j<str.size();j++){
				if(str[j]>='0' && str[j]<='9') {
					temp+=str[j];
					i=j;
				}
				else if(str[j]==' ') continue;
				else break;
			}
			if(temp.size()>0){
				int p=stoi(temp);
				if(str[sign]=='-') p=-p;
				st.insert(p);
			}
		}
	}
}
int main(){
	code();
	string str;
	while(getline(cin,str)){
		if(str=="0") break;
		allConstants(str);
	}
	for(auto it:st) cout << it << " ";
}
