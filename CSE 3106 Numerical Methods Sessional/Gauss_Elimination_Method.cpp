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
	int n;	cin >> n;
	float arr[10][10],x[10];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+1;j++){
			cin >> arr[i][j];
		}
	}
	float ratio;
	for(int i=1;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			ratio = arr[j][i]/arr[i][i];
			for(int k=1;k<=n+1;k++){
				arr[j][k] = arr[j][k]-ratio*arr[i][k];
			}
		}
	}

	x[n] = arr[n][n+1]/arr[n][n];
	for(int i=n-1;i>=1;i--){
		x[i] = arr[i][n+1];
		for(int j=i+1;j<=n;j++){
			x[i] = x[i]-arr[i][j]*x[j];
		}
		x[i] = x[i]/arr[i][i];
	}

	for(int i=1;i<=n;i++){
		cout << x[i] << endl;
	}
}