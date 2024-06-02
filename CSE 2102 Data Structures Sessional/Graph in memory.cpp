#include<bits/stdc++.h>
using namespace std;
int graph[1000][1000];
int main()
{
    int v;
    cin >> v;
    int e;
    cin >> e;
    for(int i=0; i<e; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1][v2]=1;
        graph[v2][v1] = 1;
    }

    for(int i=1; i<=v; i++)
    {
        for(int j=1; j<=v; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}

