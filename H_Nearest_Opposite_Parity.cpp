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
    
vector<int>grafo[MAXIMO];
bool visited[MAXIMO];
vector<int>distancia(MAXIMO, inf);

void addEdge(int from, int to){
    grafo[from].push_back(to);
}
void BFS(int source) {
    for (int i = 0; i < n_vertices; i++) {
        distancia[i] = inf;
    }

    distancia[source] = -1;
    queue<int> tour;
    tour.push(source);

    while (!tour.empty()) {
        int u = tour.front();
        tour.pop();
        for (int v : grafo[u]) {
            int d = distancia[u] + 1;
            if (d < distancia[v]) {
                distancia[v] = d;
                tour.push(v);
            }
        }
    }
}    
void Solve(){
    int a, b;
    cin >> n_vertices;
    vector<int>arr(n_vertices+2), distImpares;
    int indexPar = n_vertices;
    int indexImpar = n_vertices + 1;
    bucle(i, n_vertices){
        cin >> arr[i];
        if(arr[i]&1)addEdge(indexImpar, i);
        else addEdge(indexPar, i);
        int l = i  - arr[i];
        int r = i  + arr[i];
        if(l>=0 and l<n_vertices){
            addEdge(l, i);
        }
        if(r>=0 and r<n_vertices){
            addEdge(r, i);
        }
    }
    BFS(indexImpar);
    vector<int>Impares(distancia);
    BFS(indexPar);
    vector<int>Pares(distancia);
    //distancia.clear();
    //cout<<distancia[0]<<distancia[1]<<distancia[2];
    bucle(i, n_vertices){
        if(Impares[i]==inf)Impares[i]=-1;
        if(Pares[i]==inf)Pares[i]=-1;
    }
    bucle(i, n_vertices){
        if(arr[i]&1)cout<<Pares[i]<<" ";
        else cout<<Impares[i]<<" ";
    }
    
}
    
    
int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}