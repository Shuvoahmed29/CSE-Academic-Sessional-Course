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
	int line = 0;
	int open1=0,close1=0,backet1=0;
	int open2=0,close2=0,backet2=0;
	int open3=0,close3=0,backet3=0;

	bool ok1=true,ok2=true,ok3=true;
	int IF=0;
	while(getline(cin,str)){
		int semi = 0;
		line++;
		if(str[0]=='/' && str[1]=='*') {
			cout << " \n";
			continue;
		}
		if(str[0]=='/' && str[1]=='/') {
			cout << " \n";
			continue;
		}
		cout << str << endl;
		for(int i=0;i<str.size();i++){
			if(str[i]==';') semi++;
			if(str[i]==';' && str[i+1]==';') {
				cout << "Duplicate Semi-Color Error at line: "<<line << endl;
				break;
			}
		}
		
		for(int i=0;i<str.size();i++){

			if(str[i]=='i' && str[i+1]=='f') IF++;
			else if(str[i]=='e' && str[i+1]=='l') IF--;
			
			if(str[i]=='('){
				open1++;
				if(ok1) backet1=line,ok1=false;
			}
			else if(str[i]==')') close1++;

			if(str[i]=='{') {
				open2++;
				if(ok2) backet2=line,ok2=false;
			}
			else if(str[i]=='}') close2++;

			if(str[i]=='['){
				open3++;
				if(ok3) backet3=line,ok3=false;
			}
			else if(str[i]==']') close3++;

			if(IF<0){
				cout <<"Else before if at line: "<<line<<endl;
				IF=0;
			}
		}


		if(open1<close1){
			cout <<"First Backet Error at line: "<<line <<endl;
			open1 = close1 = 0;
			ok1=true;
		}

		if(open2<close2){
			cout <<"Second Backet Error at line: "<<line <<endl;
			open2 = close2 = 0;
			ok2=true;
		}

		if(open3<close3){
			cout <<"Third Backet Error at line: "<<line <<endl;
			open3 = close3 = 0;
			ok3=true;
		}

		if(str=="$" && open1>close1){
			cout <<"First Backet Error at line: "<<backet1 <<endl;
		}

		if(str=="$" && open2>close2){
			cout <<"Second Backet Error at line: "<<backet2 <<endl;
		}

		if(str=="$" && open3>close3){
			cout <<"Third Backet Error at line: "<<backet3 <<endl;
		}
	}
}
