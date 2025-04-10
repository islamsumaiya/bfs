#include<bits/stdc++.h>
using namespace std;
void bfs(int source,vector<vector<int>>&graph,vector<bool>&visited)
{
    queue<int>q;
    q.push(source);
    visited[source]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        // sort(graph[u].begin(),graph[u].end());
        for(int i:graph[u])
        {
            if(!visited[i])
            {
                visited[i]=true;
                q.push(i);
            }
        }
    }
}
int main()
{
    int nodes=5;
    vector<vector<int>>graph(nodes +1);
    vector<bool>visited(nodes + 1,false);
    graph[0]= {1,2};
    graph[1]= {1,2,3};
    graph[2]= {0,1};
    graph[3]= {1,4};
    graph[4]= {3};
    bfs(0,graph,visited);
}
