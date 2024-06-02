#include<bits/stdc++.h>
using namespace std;
template<typename tp>
struct graph
{
    map<tp,list<tp> > mp;
    void addEdges(int x,int y)
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
        for(auto d:mp)
        {
            visited[d.first] = false;
        }
        DFS_helper(src,visited);
    }
};
int main()
{
    graph<int> g;
    g.addEdges(10,4);
    g.addEdges(4,0);
    g.addEdges(4,6);
    g.addEdges(10,11);

    g.DFS(10);
}
