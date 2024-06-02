//21. Graph representation on memory(Adjacency Matrix).cpp
#include<bits/stdc++.h>
using namespace std;
int graph[10000][10000];
int main()
{
    cout << "Enter number of vertex: ";
    int vertex;
    cin >> vertex;


    cout << "Enter number of edges: ";
    int edges;
    cin >> edges;

    cout << "Enter all edges!!\n";
    for(int i=0; i<edges; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }
    cout << "\nAdjacency Matrix!!\n";
    for(int i=0; i<vertex; i++)
    {
        for(int j=0; j<vertex; j++)
        {
            cout << graph[i+1][j+1] << " ";
        }
        cout << endl;
    }
}
