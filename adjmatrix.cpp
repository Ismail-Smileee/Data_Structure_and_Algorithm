#include<iostream>
using namespace std;
int mat[20][20];
int count = 0;
void displayMatrix(int v){
int i,j;
for(i=0;i<v;i++){
    for (j=0;j<v;j++){
        cout<<mat[i][j]<<"";
    }
    cout<<endl;
}
}
void add_edge(int u,int v){
mat[u][v]=5;
mat[v][u]=1;
}

main(){

int v =6;
add_edge(0, 4);
add_edge(0, 3);
add_edge(1, 2);
add_edge(1, 4);
add_edge(1, 5);
add_edge(2, 3);
add_edge(2, 5);
add_edge(5, 3);
add_edge(5, 4);
displayMatrix(v);
}
