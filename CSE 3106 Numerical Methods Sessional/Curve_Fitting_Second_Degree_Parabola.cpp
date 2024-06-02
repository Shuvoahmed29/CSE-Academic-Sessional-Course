#include<bits/stdc++.h>
using namespace std;
void code(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}
// y = ab^x
int main(){
    code();
    int n;  cin >> n;
    float x[n+1],y[n+1];
    for(int i=0;i<n;i++)    cin >> x[i] >> y[i];
    float sumX=0,sumY=0,X2=0,sumXY=0,x2Y=0,X3=0,X4=0;
    for(int i=0;i<n;i++){
        sumX += x[i];
        sumY +=y[i];
        sumXY += x[i]*y[i];
        x2Y += x[i]*x[i]*y[i];
        X2 += x[i]*x[i];
        X3 += pow(x[i],3);
        X4 += pow(x[i],4);
    }
    float arr[10][10],ans[10];
    arr[1][1] = n;
    arr[1][2] = sumX;
    arr[1][3] = X2;
    arr[1][4] = sumY;

    arr[2][1] = sumX;
    arr[2][2] = X2;
    arr[2][3] = X3;
    arr[2][4] = sumXY;

    arr[3][1] = X2;
    arr[3][2] = X3;
    arr[3][3] = X4;
    arr[3][4] = x2Y;
    float ratio;
    n = 3;
    for(int i=1;i<=n-1;i++){
        for(int j=i+1;j<=n;j++){
            ratio = arr[j][i]/arr[i][i];
            for(int k=1;k<=n+1;k++){
                arr[j][k] = arr[j][k]-ratio*arr[i][k];
            }
        }
    }

    ans[n] = arr[n][n+1]/arr[n][n];
    for(int i=n-1;i>=1;i--){
        ans[i] = arr[i][n+1];
        for(int j=i+1;j<=n;j++){
            ans[i] = ans[i]-arr[i][j]*ans[j];
        }
        ans[i] = ans[i]/arr[i][i];
    }

    for(int i=1;i<=n;i++){
        cout << ans[i] << endl;
    }
}