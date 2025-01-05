#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> graph[10];
    int edges, n1,n2;
    cin>>edges;
    for(int i=0; i<edges; i++)
    {
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    for (int i=0; i<10; i++)
    {
        cout<<"Node "<<i<<":";
        for(int j=0; j<graph[i].size(); j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
}
