//Write a program to recognize keywords and identifiers.
#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
set<string>st;
bool validKeywords(string s){
	if(s=="auto"||s=="double"||s=="int"||s=="struct"||s=="break"||s=="switch"||s=="string"||s=="stringstream")
		return true;
	if(s=="else"||s=="long"||s=="case"||s=="enum"||s=="register"||s=="typedef"||s=="endl")
		return true;
	if(s=="char"||s=="extern"||s=="return"||s=="union"||s=="continue"||s=="for"||s=="endif"||s=="break")
		return true;
	if(s=="signed"||s=="void"||s=="do"||s=="if"||s=="static"||s=="while"||s=="then")
		return true;
	if(s=="default"||s=="goto"||s=="sizeof"||s=="const"||s=="float"||s=="short" || s=="unsigned")
		return true;
	return false;
}

void isKeywords(string str){
	stringstream ss(str);
	string word;
	while(ss>>word){
		if(validKeywords(word)) st.insert(word);
		else{
			for(int i=0;i<word.size();i++){
				if(word[i]=='('||word[i]==')'||word[i]=='.'){
					word.erase(word.begin()+i);
					if(validKeywords(word)) st.insert(word);
				}
			}
		}
	}
}
bool isValid(string s){
	if(s=="int"||s=="double"||s=="float"||s=="char"||s=="string"||s=="long")
		return true;
	return false;
}
bool isIdentifiers(string str){
	stringstream ss(str);
	string word;
	bool ok=false;
	while(ss>>word){
		if(isValid(word))	ok=true;
		else if(ok){
			word.erase(word.begin()+word.size()-1);
			cout << word << " ";
			ok=false;
		}
	}
}
int main(){
	code();
	string str;
	cout << "All Identifiers: ";
	while(getline(cin,str)){
		if(str=="0") break;
		isKeywords(str);
		isIdentifiers(str);
	}
	cout << "\nAll Keywords: ";
	for(auto it:st) cout << it << " ";
	cout << endl;
}
