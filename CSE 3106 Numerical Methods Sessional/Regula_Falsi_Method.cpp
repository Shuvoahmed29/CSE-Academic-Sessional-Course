#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) pow(x,3)-2*x-5
int main(){
	code();
	float x0,x1;	cin >> x0 >> x1;
	float f0,f1,f2,x2;
	int cunt=0;
	float e = 0.001;
	do{
		f0 = f(x0);
		f1 = f(x1);
		x2 = (x0*f1-x1*f0)/(f1-f0);
		f2 = f(x2);
		if(f2<0) x0 = x2;
		else x1 = x2;
		cunt++;
		cout << cunt << " x: "<<x2 << " f(x): "<< f2 << endl;

	}while(abs(f2)>e);
	cout << "\nRoot is: " << x2 << endl;
}