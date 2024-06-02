//Depth First Search.cpp
#include<bits/stdc++.h>
using namespace std;
template<typename tp>

class graph
{
    map< tp,list<tp> > mp;
public:
    void addEdges(int x, int y)
    {
        mp[x].push_back(y);
        mp[y].push_back(x);
    }

    void DFS_helper(tp src,map<tp,bool>&visited)
    {
        cout << src << " ";
        visited[src] = true;
        for(auto d:mp[src])
        {
            if(!visited[d])
            {
                DFS_helper(d,visited);
            }
        }
    }

    void DFS(tp src)
    {
        map<tp,bool>visited;
        for(auto p:mp)
        {
            tp node = p.first;
            visited[node] = false;
        }
        DFS_helper(src,visited);
    }
};
int main()
{
    graph<int> g;
    g.addEdges(1,2);
    g.addEdges(2,4);
    g.addEdges(2,5);
    g.addEdges(4,7);
    g.addEdges(5,8);
    g.addEdges(5,0);
    g.addEdges(1,3);
    g.addEdges(3,6);

    g.DFS(1);

}
