#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x,y) (3*x+y/2)
int main(){
	code();
	float x0,y0;	cin >> x0 >> y0;
	float xn;	cin >> xn;
	float interval;	cin >> interval;
	float h = (xn-x0)/interval;
	float yn,k1,k2,k3,k4,k;
	for(int i=1;i<=interval;i++){
		k1 = h*(f(x0,y0));
		k2 = h*(f((x0+h/2),(y0+k1/2)));
		k3 = h*(f((x0+h/2),(y0+k2/2)));
		k4 = h*(f((x0+h),(y0+k3)));
		k = (k1+2*k2+2*k3+k4)/6;
		yn = y0+k;
		cout << x0 << " "<<y0 << " "<<yn << endl;
		y0=yn;
		x0 = x0+i*h;
	}
	cout<<"Value of y at x = "<< xn<< " is " << yn << endl;
}