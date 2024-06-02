#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
#define order 4
#define MAXN 100
int main(){
	code();
	int n;	cin >> n;
	float x[MAXN+1],y[MAXN+1];
	for(int i=1;i<=n;i++) cin >> x[i] >> y[i];

	float value;	cin >> value;

	float diff[MAXN+1][order+1];
	for(int i=n;i>=0;i--) diff[i][1] = y[i]-y[i-1];

	for(int j=2;j<=order;j++){
		for(int i=n;i>j;i--){
			diff[i][j] = diff[i][j-1]-diff[i-1][j-1];
		}
	}
	int idx = n;

	float h = x[2]-x[1];
	float u = (value-x[idx])/h;

	float y_value = y[idx];

	float fact_u = 1.0,multi = 1.0;
	for(int i=1;i<=order;i++){
		fact_u *= u+i-1;
		multi *= i;
		y_value += (fact_u/multi)*diff[idx][i];
	}
	cout << y_value << endl;
}
/*
6
1931 12
1941 15
1951 20
1961 27
1971 39
1981 52
1978

5
80 5026
85 5674
90 6362
95 7088
100 7854
105

5
1891 46
1901 66
1911 81
1921 93
1931 101
1925
*/