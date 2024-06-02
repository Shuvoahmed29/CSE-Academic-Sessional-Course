//Representation of graph using adjancency List.
#include<bits/stdc++.h>
using namespace std;
const int N=1e5;
vector<int>graph[N];
int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;   cin >> n >> m;
    for(int i=0;i<m;i++){
        int v1,v2;  cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    for(int i=1;i<=n;i++){
        cout << i << " Connected to: ";
        for(int child:graph[i]){
            cout << child << " ";
        }
        cout << endl;
    }
}