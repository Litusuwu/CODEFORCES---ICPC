#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int MAXIMO = 1e6;
const ll inf = LLONG_MAX;
const ll n_vertices = 1e6;

vector<pair<ll,ll>>adj[n_vertices];
bool visited[n_vertices];

vector<pair<int,int>>grafo[MAXIMO];
bool visited[MAXIMO];
vector<int>distancia(MAXIMO, inf);

void Solve(){
    ll n, m, u, v, w, yisus = 0 ;
    cin >> n >> m;
    vector<ll>distancias(n, inf), ruta(n, -1), path;
    rep(i, m){
        cin >> u >> v >> w;
        adj[u-1].emplace_back(w, v-1);
        adj[v-1].emplace_back(w, u-1);
    }
    
    distancias[0]=0;
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
    cola.push({0, 0});
    while(!cola.empty()){
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
    cin >> time ;
    while(time--)Solve();
    return 0;
}