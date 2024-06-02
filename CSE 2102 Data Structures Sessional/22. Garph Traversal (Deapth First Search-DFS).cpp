// 22. Garph Traversal (Deapth First Search-DFS).cpp
#include<bits/stdc++.h>
using namespace std;
template<typename tp>
class graph
{
    map <tp,list<tp>> mp;
public:
    void addEdges(int x, int y)
    {
        mp[x].push_back(y);
        mp[y].push_back(x);
    }

    void DFS_help(tp src,map<tp,bool>&visited)
    {
        cout << src << " ";
        visited[src] = true;
        for(tp p:mp[src])
        {
            if(!visited[p])
            {
                DFS_help(p,visited);
            }
        }
    }
    void DFS(tp src)
    {
        map<tp,bool> visited;
        for(auto d:mp)
        {
            tp node = d.first;
            visited[node] = false;
        }
        DFS_help(src,visited);
    }
};
int main()
{
    graph<int>g;
    cout << "Enter number of edges: ";
    int edge;
    cin >> edge;
    for(int i=0; i<edge; i++)
    {
        int v1,v2;
        cin >> v1 >> v2;
        g.addEdges(v1,v2);
    }
    g.DFS(2);
}
/* g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(3, 0);*/
