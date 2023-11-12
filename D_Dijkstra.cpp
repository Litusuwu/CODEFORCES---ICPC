#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(ll i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(ll i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(ll i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(ll i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(ll i = k; i > n ; i--)
#define bucleR2(i, k, n) for(ll i = k; i >= n ; i--)
#define pii pair<int,int>

typedef long long ll;

const ll inf = LLONG_MAX;
const ll n_vertices = 1e6;

vector<pair<ll,ll>>adj[n_vertices];
bool visited[n_vertices];



void Solve(){
    ll n, m, u, v, w, yisus = 0 ;
    cin >> n >> m;
    vector<ll>distancias(n, inf), ruta(n, -1), path;
    //adj.resize(n);
    bucle(i, m){
        cin >> u >> v >> w;
        adj[u-1].emplace_back(w, v-1);
        adj[v-1].emplace_back(w, u-1);
    }
    
    distancias[0]=0;
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
    cola.push({0, 0});
    while(!cola.empty()){
        //cout<<cola.top().first<<" "<<cola.top().second<<endl;
        ll valor = cola.top().second;
        ll dist = cola.top().first;
        cola.pop();
        
        if(dist != distancias[valor])continue;
        
        for(auto ar : adj[valor]){
            ll vecino = ar.second;
            ll arista = ar.first;
            if(distancias[valor] + arista < distancias[vecino]){
                distancias[vecino] = distancias[valor] + arista;
                ruta[vecino] = valor;
                cola.push({distancias[vecino], vecino});
            }
        }
    }
    // vector<int>path;
    //for(int x: ruta)cout<<x<<" ";
    // path.push_back(0);
    if(ruta[n-1]==-1)cout<<"-1"<<endl;
    else{
        for(ll v = n - 1 ; v != 0 ; v = ruta[v])path.push_back(v+1);
        path.push_back(1);
        reverse(path.begin(), path.end());
        for(auto it : path )cout<<it<<" ";
    }
    
    //cout<<"a";
    //DIjasktra desde 0
    
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}