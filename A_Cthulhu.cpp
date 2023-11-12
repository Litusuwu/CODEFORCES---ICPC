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

const int V = 100;
vector<int>adj[V];
bool visited[V]{};

// void DFS(int u){
//     visited[u]=true;
//     for(auto v : adj[u])if(!visited[v])DFS(v);
// }
void DFSCiclo(int u, int &count, int k){
    if(visited[u]){count++;return;}
    visited[u]=true;
    for(auto v : adj[u]){
        //cout<<u<<" conecta a "<<v<<endl;
        if(v == k)continue;
        DFSCiclo(v, count, u);
    }
}
void Solve(){
    int nVertices, nAristas, u, v, count = 0;
    cin >> nVertices >> nAristas;
    bucle(i , nAristas){
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    DFSCiclo(0, count, -1);
    if(count!=2){cout<<"NO"<<endl;return;}
    bucle(i, nVertices){
        if(!visited[i]){cout<<"NO"<<endl;return;}
    }
    if(count==2)cout<<"FHTAGN!"<<endl;

}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}