#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
int main(){
	code();
	string str;	getline(cin,str); //a + b * c / d + e - f
	cout << "Input Expression: " << str << endl;
	string s;
	for(int i=0;i<str.size();i++){
		if(str[i]==' ' || str[i] == '(' || str[i] == ')') continue;
		s.push_back(str[i]);
	}
	int len = 0,idx = 0;
	cout << "Three Address Code!\n";
	for(int i=0;i<s.size()/2;i++){
		if(idx!=0)	cout <<"t"<<i+1 <<" = " << s[len] << idx << s[len+1] << s[len+2] << endl;
		else	cout <<"t"<<i+1 <<" = " << s[len] << s[len+1] << s[len+2] << endl;
		s[len+2] = 't';
		len+=2;
		idx++;
	}

}
