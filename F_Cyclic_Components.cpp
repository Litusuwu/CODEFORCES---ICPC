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
const int V = 200001;
vector<int>adj[V];
bool visited[V]{};
ll contador = 0;

// void DFS(int u){
//     visited[u]=true;
//     for(auto v : adj[u])if(!visited[v])DFS(v);
// }
void DFS(int u, int k){
    //if(visited[u]){count++;return;}
    int len=adj[u].size();
    if(len>2){
        contador=0;
        return;
    }
    if(visited[u]){
        contador = 2 ;
        return;
    }
    visited[u]=true;
    for(auto v : adj[u]){
        if(v == k )continue;
        DFS(v, u);
    }
}
void Solve(){
    int nVertices, nAristas, u, v, ans=0;
    cin >> nVertices >> nAristas;
    bucle(i , nAristas){
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    bucle(i, nVertices){
        contador = 0;
        if(!visited[i])DFS(i, -1);
        if(contador==2)ans++;
    }
    cout<<ans;

}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}