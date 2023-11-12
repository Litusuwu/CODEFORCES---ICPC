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

typedef long long ll;
const ll MAXIMO = 1e6;
const ll inf = LLONG_MAX;
ll n_vertices;

vector<pair<ll,ll>>grafo[MAXIMO];
bool visited[MAXIMO];
vector<ll>times(MAXIMO, inf);
map<ll, ll>planets[MAXIMO];
//vector<ll>tiempoInicial(MAXIMO, 0);
vector<ll>indexZ;
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
    int m, a, b, c, k, t, antK;
    cin >> n_vertices >> m;
    initialize();
    bucle(i, m){
        cin >> a >> b >> c;
        addEdge(a-1, b-1, c);
        addEdge(b-1, a-1, c);
    }
    bucle(i, n_vertices){
        cin >> t;
        bucle(j, t){
            cin >> k;
            planets[i][k]=1;
            indexZ.push_back(k);
        }
        bucleR1(z, t-1, 0){
            if(indexZ[z]-1==indexZ[z-1]){
                planets[i][(indexZ[z-1])] = planets[i][(indexZ[z])] + planets[i][(indexZ[z-1])];
            }
        }
        indexZ.clear();
    }
    times[0]=planets[0][0];
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
    cola.push({times[0], 0});
    while(!cola.empty()){
        ll valor = cola.top().second;
        ll tiempo = cola.top().first;
        ll timeEx2 = planets[valor][tiempo];
        cola.pop();
        if(tiempo != times[valor])continue;
        for(auto dest : grafo[valor]){
            ll vecino = dest.second;
            ll timeExtra = dest.first;
            
            if(times[valor] + timeExtra + timeEx2 < times[vecino]){
                times[vecino] = times[valor] + timeExtra + timeEx2;
                cola.push({times[vecino], vecino});
            }
        }
    }
    if(times[n_vertices-1]==inf)cout<<"-1";
    else cout<<times[n_vertices-1];
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(int i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(int i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(int i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(int i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(int i = k; i > n ; i--)
#define bucleR2(i, k, n) for(int i = k; i >= n ; i--)
typedef long long ll;

typedef long long ll;
const ll MAXIMO = 1e6;
const ll inf = LLONG_MAX;
ll n_vertices;

vector<pair<ll,ll>>grafo[MAXIMO];
bool visited[MAXIMO];
vector<ll>times(MAXIMO, inf);
map<ll, ll>planets[MAXIMO];
vector<ll>tiempoInicial(MAXIMO, 0);

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
    int m, a, b, c, k, t, antK;
    cin >> n_vertices >> m;
    initialize();
    bucle(i, m){
        cin >> a >> b >> c;
        addEdge(a-1, b-1, c);
        addEdge(b-1, a-1, c);
    }

    bucle(i, n_vertices){
        cin >> t;
        bucle(j, t){
            cin >> k;
            planets[i][k]=j+1;
        }
    }
    
    //cout<<planets[0][0]<<endl;
    
    times[0]=planets[0][0];
    priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
    cola.push({planets[0][0] , 0});
    while(!cola.empty()){
        ll valor = cola.top().second;
        ll tiempo = cola.top().first;
        ll timeEx2 = planets[valor][tiempo];
        
        cola.pop();
        if(tiempo != times[valor])continue;
        for(auto dest : grafo[valor]){
            ll vecino = dest.second;
            ll timeExtra = dest.first;
            
            if(times[valor] + timeExtra + timeEx2 < times[vecino]){
                times[vecino] = times[valor] + timeExtra + timeEx2;
                cola.push({times[vecino], vecino});
            }
        }
    }
    if(times[n_vertices-1]==inf)cout<<"-1";
    else cout<<times[n_vertices-1];
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}*/