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
const ll MAXIMO = 1e6;
const ll inf = LLONG_MAX;
ll n_vertices;

vector<pair<ll,ll>>grafo[MAXIMO];
bool visited[MAXIMO];
vector<ll>times(MAXIMO, inf);

void addEdge(int from, int to, int weight){
    grafo[from].emplace_back(weight,to);
}
void initialize(){
    bucle(i, n_vertices){
        grafo[i].clear();
        visited[i]=false;
        times[i]=inf;
    }
}

void Solve(){
    int m, l, ini, a, b, c, ans=0;
    cin >> n_vertices >> m >> ini;
    bucle(i, m){
        cin >> a >> b >> c;
        addEdge(a-1, b-1, c);
        addEdge(b-1, a-1, c);
    }
    cin >> l;
    times[ini-1]=0;
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
    cola.push({times[ini-1], ini-1});
    while(!cola.empty()){
        //cout<<"a";
        ll valor = cola.top().second;
        ll tiempo = cola.top().first;
        cola.pop();
        if(tiempo != times[valor])continue;
        for(auto dest : grafo[valor]){
            ll vecino = dest.second;
            ll timeExtra = dest.first;
            if(times[valor] + timeExtra  < times[vecino]){
                times[vecino] = times[valor] + timeExtra;
                cola.push({times[vecino], vecino});
            }
        }
    }
    
    bucle(i, n_vertices){
        for(auto dist : grafo[i]){
            int w = dist.first;
            int u = dist.second;
            if(times[i] < l and l < times[i] + w){
                int rest = w - (l - times[i]);
                if(times[u] + rest >= l) ans++;
                if(times[u] + rest == l) continue;
            }
            if(times[u]< l and l < times[u] + w){
                int rest = w - (l - times[u]);
                if(times[i] + rest >= l) ans++;
            }
        }
    }
    ans/=2;
    for(int i = 0 ; i < n_vertices ; i++){
        if(times[i]==l)ans++;
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