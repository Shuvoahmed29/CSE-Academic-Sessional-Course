//Breadth First Search.cpp
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

    void BFS(tp src)
    {
        map<tp,bool>visited;
        queue<int> Q;
        Q.push(src);
        visited[src] = true;
        while(!Q.empty())
        {
            tp node = Q.front();
            Q.pop();
            cout << node << " ";
            visited[node] = true;
            for(auto d:mp[node])
            {
                if(!visited[d])
                {
                    Q.push(d);
                    visited[d] = true;
                }
            }
        }
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

    g.BFS(1);

}
