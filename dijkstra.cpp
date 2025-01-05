
#include <bits/stdc++.h>
using namespace std;

int main(){
    int nodes;
    cin >> nodes;
    graph[nodes][nodes];

    int edges;
    cin >> edges;
    for(int i=0;i<nodes;i++){
        for(int j=0;j<nodes;j++){
            if(i==j) graph[i][j] = 0;
            else graph[i][j] = 99999;
        }
    }
    for(int i=0;i<edges;i++){
        int a, b, w;
        cin >> a >> b >> w;
        graph[a][b] = w;
    }
    int source;
    cin >> source;
    int distance[nodes];
    int visited[nodes];
    int total_visited = 0;

    for(int i=0;i<nodes;i++){
        distance[i] = INT_MAX;
        visited[i] = 0;
    }

    distance[source] = 0;

    while(total_visited < nodes){

        int current_source = -1;
        int current_source_dis = 99999;
        for(int i=0;i<nodes;i++){
            if(visited[i]==0 &&
               current_source_dis > distance[i]){
                current_source = i;
                current_source_dis = distance[i];
            }
        }

        visited[current_source] = 1;
        total_visited++;

        // Step 02:
        // Find the neighbors of current source
        // calculate their path length
        // update distance[] of neighbors

    }

    for(int i=0;i<nodes;i++)
    {
        cout << distance[i] << " ";
    }
}
