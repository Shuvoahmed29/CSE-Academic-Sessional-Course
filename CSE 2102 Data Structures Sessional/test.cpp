#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int n, k;   cin >> n >> k;
    vector<int>vec1(n),vec2(k);
    for(auto &d:vec1)   cin >> d;
    for(auto &d:vec2){
        cin >>d;
        if(d < vec1[0]) cout << 0 << '\n';
        else{
            auto it = upper_bound(vec1.begin(), vec1.end(),d);
            cout << (it - vec1.begin()) << '\n';
        }
    }
}
