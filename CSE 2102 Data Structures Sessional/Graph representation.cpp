//Graph representation.cpp
#include<bits/stdc++.h>
using namespace std;
int graph[10000][10000];
int main()
{
    cout << "Vertex: ";
    int vertex;
    cin >> vertex;
    cout << "Edges: ";
    int edge;
    cin >> edge;
    cout << "Enter edges!!\n";
    for(int i=0; i<edge; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    cout << "Adjacency Matrix!\n";
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }
}
