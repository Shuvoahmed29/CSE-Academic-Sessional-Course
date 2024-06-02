#include<bits/stdc++.h>
using namespace std;
template<typename tp>
struct graph
{
    map<tp,list<tp>> mp;
    void addEdges(int x,int y)
    {
        mp[x].push_back(y);
        mp[y].push_back(x);
    }
    void BFS(tp src)
    {
        map<tp,bool> visited;
        queue<tp> qu;
        qu.push(src);
        visited[src] = true;
        while(!qu.empty())
        {
            tp node = qu.front();
            cout << node <<" ";
            visited[node] = true;
            qu.pop();
            for(auto d:mp[node])
            {
                if(!visited[d])
                {
                    qu.push(d);
                }
            }
        }
    }
};
int main()
{
    graph<int> g;
    g.addEdges(10,4);
    g.addEdges(4,0);
    g.addEdges(4,6);
    g.addEdges(10,11);

    g.BFS(10);
}
