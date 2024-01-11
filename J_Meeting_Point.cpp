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

const int MAXIMO = 1e6;
int n_vertices;
const int inf = INT_MAX;
    
vector<pair<int,int>>grafo[MAXIMO];
bool visited[MAXIMO];
vector<int>distancia(MAXIMO, inf);

void addEdge(int from, int to, int w){
    grafo[from].emplace_back( to, w);
}
void Dijkstra(int source, int ignored = -1) {
    for (int i = 0; i < n_vertices; i++) {
        distancia[i] = inf;
    }

    distancia[source] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> path;
    path.push({0, source});

    while (!path.empty()) {
        auto val  = path.top();
        path.pop();
        int u = val.second;
        if (distancia[u] != val.first) continue;
        for (auto edge : grafo[u]) {
            int v = edge.first;
            if (v == ignored) continue;
            int w = edge.second;
            int d = distancia[u] + w;
            if (d < distancia[v]) {
                distancia[v] = d;
                path.push({distancia[v], v});
            }
        }
    }
}
void Solve(){
    int cant, ini, fin, u, v, w;
    cin >> n_vertices >> cant >> ini >> fin;ini--;fin--;
    bucle(i, cant){
        cin >> u >> v >> w;u--;v--;
        addEdge(u, v, w);
        addEdge(v, u, w);
    }
    Dijkstra(ini);
    if(distancia[fin]==inf){cout<<"*"<<endl;return;}
    vector<int>original(distancia);
    //cout<<original[1]<<original[0]<<original[2];
    Dijkstra(ini, fin);
    //cout<<distancia[1]<<distancia[0]<<distancia[2];
    int c = 0;
    bucle(i, n_vertices){
        if(original[i]==2*original[fin] and original[i]<distancia[i]){
            cout<<i+1<<" ";
            c++;
        }
    }
    if(c==0)cout<<'*';
    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}