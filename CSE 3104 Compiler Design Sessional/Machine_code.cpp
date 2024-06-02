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
	string str;
	int idx = 0;
	while(getline(cin,str)){
		cout << str << endl;
		cout << "MOV R"<<idx <<","<<str[2] << endl;
		if(str[3]=='+') cout << "ADD R"<<idx <<","<<str[4] << endl;
		if(str[3]=='-') cout << "SUB R"<<idx <<","<<str[4] << endl;
		if(str[3]=='*') cout << "MULTI R"<<idx <<","<<str[4] << endl;
		idx++;
	}

}