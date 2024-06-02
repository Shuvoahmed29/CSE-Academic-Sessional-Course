#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) 3*exp(x)*sin(x)
int main(){
	code();
	double lower,upper;	cin >> lower >> upper;
	double interval;	cin >> interval;

	double step = (upper-lower)/interval;
	double ans = f(lower)+f(upper);
	ans = ans/2;

	for(double i=1;i<interval;i++){
		double x = lower + i*step;
		ans += f(x);
	}
	cout << ans*step << endl;
}