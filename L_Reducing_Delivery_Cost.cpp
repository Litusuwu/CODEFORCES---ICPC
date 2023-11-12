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
vector<bool>visited(MAXIMO, false);
vector<ll>times(MAXIMO, inf);
//map<ll, ll>planets[MAXIMO];
//vector<ll>tiempoInicial(MAXIMO, 0);
//vector<ll>indexZ;

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
    int m, a, b, c, t, u, v;
    cin >> n_vertices >> m >> t;
    initialize();
    bucle(i, m){
        cin >> a >> b >> c;
        addEdge(a-1, b-1, c);
        addEdge(b-1, a-1, c);
    }
    
    vector<int>save(n_vertices,10000);
    map<pair<int,int>, int>route;
    map<int, int>ficha;
    int max=0, from, to;
    int cant=0;

    bucle(i, t){
        visited.clear();
        times.clear();
        cin>>u>>v;
        v--;
        u--;
        if(i==0){
            from = u;
            to = v;
        }
        times[u]=0;
        priority_queue< pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> cola;
        cola.push({times[0], 0});
        while(!cola.empty()){
            ll valor = cola.top().second;
            ll tiempo = cola.top().first;
            
            cola.pop();
            if(tiempo != times[valor])continue;
            for(auto dest : grafo[valor]){
                ll vecino = dest.second;
                ll timeExtra = dest.first;
                
                if(times[valor] + timeExtra  < times[vecino]){
                    times[vecino] = times[valor] + timeExtra ;

                    if(i==0){
                        save[vecino]=valor;
                        cant++;
                        route.insert({{valor, vecino}, timeExtra});
                        cout<<vecino<<" ";
                    }
                    else{ //repeat t times
                        if(save[vecino]!=inf){
                            ficha[vecino] = ficha[vecino]+1;
                            ficha[valor]  = ficha[valor]+1;
                        }
                    }

                    cola.push({times[vecino], vecino});
                }
            }
        }
        vector<int>path;
        
    }
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}