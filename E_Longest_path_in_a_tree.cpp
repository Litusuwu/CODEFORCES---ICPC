#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(int i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(int i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(int i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(int i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(int i = k; i > n ; i--)
#define bucleR2(i, k, n) for(int i = k; i >= n ; i--)
typedef long long ll;

const int V = 100001;
//ll camino = 0 ;
ll longMaxima = 0;
ll chad = 0;

vector<int>adj[V];
bool visited[V]{};

void DFS(int u, int camino){
   // cout<<camino<<" "<<u<<" "<<longMaxima<<endl;
    visited[u]=true;
    if(camino>longMaxima){
        longMaxima=camino;
        chad=u;
    }
    for(auto v : adj[u]){
        if(!visited[v])DFS(v, camino+1);
    }
}

void Solve(){
    int nVertices, maxMiaus, u, v;

    cin >> nVertices;

    bucle(i, nVertices-1){
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    DFS(0, 0);
    bucle(i, nVertices)visited[i]=false;
    longMaxima=0;
    DFS(chad, 0);
    cout<<longMaxima;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}