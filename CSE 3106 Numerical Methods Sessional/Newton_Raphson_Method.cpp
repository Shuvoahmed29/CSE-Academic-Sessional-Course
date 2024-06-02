#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) pow(x,3)-3*x-5
#define df(x) 3*pow(x,2)-3
int main(){
	code();
	float x0;	cin >> x0;
	float e = 0.001;
	float f,df,x,f1;
	int cunt=0;
	do{
		f = f(x0);
		df = df(x0);
		x = x0-(f/df);
		f1 = f(x);
		x0=x;
		cunt++;
		cout << cunt <<" X: "<<x << " f(x): "<< f1 << endl;
	}while(abs(f1)>e);

	cout << "Root is : "<< x << endl;
}