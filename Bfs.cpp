#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> graph[10];
    int edges,n1,n2;
    cin>> edges;
    for(int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    queue<int> q;
    q.push(1);
    int visited[10]= {0};

    while(!q.empty())
    {

    int node = q.front();
        q.pop();

        if(visited[node]==1)continue;
        cout << node << " ";
        visited[node]=1;
        for(int i=0; i<graph[node].size(); i++)
            q.push(graph[node][i]);
    }
}
