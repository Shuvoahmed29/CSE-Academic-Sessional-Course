#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define f(x) exp(x)
int main(){
	code();
	double lower,upper;	cin >> lower >> upper;
	double interval;	cin >> interval;

	double step = (upper-lower)/interval;
	double ans = f(lower)+f(upper);
	ans = ans;

	for(double i=1;i<interval;i++){
		double x = lower + i*step;
		if((int)i%3!=0) ans += 3*f(x);
		else ans += 2*f(x);
	}
	cout << ans*step*3/8 << endl;
}