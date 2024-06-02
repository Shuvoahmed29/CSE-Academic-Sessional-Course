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
    float sumX=0,squreX=0,sumY=0,sumXY=0;
    for(int i=0;i<n;i++){
        sumX += x[i];
        squreX += x[i]*x[i];
        sumY += log(y[i]);
        sumXY += x[i]*log(y[i]);
    }
    float A,B;
    B = (n*sumXY-sumX*sumY)/(n*squreX-sumX*sumX);
    A = (sumY-B*sumX)/n;

    float a = exp(A),b = exp(B);
    cout << "Values are: a = " << a << " and b = " << b;
}
/*
7
1 87
2 97
3 113
4 129
5 202
6 195
7 193

Values are: a = 73.7417 and b = 1.16882
*/