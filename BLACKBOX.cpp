#include<bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i <n; ++i)
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

//Binary search(logn)
void Binary(int ga){
    int l=0, r=n-1;
    bool find=false;
    while(l<r){
        int mid=(l+r)/2;
        if(num[mid]==ga){
            cout<<"YES\n";
            find=true;
            break;
        } else if(num[mid]<ga) {
            l=mid+1;
        } else r=mid-1;  
    }
    if(!find) cout<<"NO\n";
}

//Algoritmo para hallar la potencia de un numero y al mismo tiempo su residuo. Complejidad O(logN)
ll PowerMod(ll x, ll y, ll p){
    ll ans=1;
    x=x%p;
    while(y>0){
        if(y&1) ans=(x*ans)%p;
        y=y>>1;
        x=(x*x)%p;
    }
    return ans;
}

//Algoritmo O(logn) para tener un numero fibonacci
int fibonacci(int n){
    return (pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5);
}

//Algoritmo O(n^0.5) para verificar si un numero es primo
bool es_primo(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

//Criba de Eratostenes. O(n*(ln(ln(n)))
const int N=1000000;
bool is_prime[N+1];
void Sieve(ll n){
    is_prime[0]=is_prime[1]=false;
    for(ll i=2;i<=n;i++) is_prime[i]=true;
    for(ll i=2;i<=n;i++){
        if(!is_prime[i]) continue;
        for(ll j=2*i;j<=n;j+=i){
            is_prime[j]=false;
        }
    }
}

//Factorizacion gaaaaaaa
const ll N = 100000;
ll first_prime_divisors[N+1];
void Sieve(ll  n){
    for (ll i = 1; i <= n; i++) first_prime_divisors[i] = i;
    for (ll  i = 2; i <= n; i++){
        if(first_prime_divisors[i] != i) continue; 
        for(ll j = i * i; j <= n; j += i){
            if (first_prime_divisors[j] == j)
            first_prime_divisors[j] = i ;
        }
    }
}
vector<ll> Prime_factor(ll n){
    vector<ll> factorization;
    if (n == 1) factorization.push_back(n);
    while(n > 1){
        ll p = first_prime_divisors[n];
        while(n % p == 0){
            n /= p ;
        }
        factorization.push_back(p);
    }
    
    return factorization;
}

//dfs de manera recursiva
vector<vi> grafo;
vector<int> visited;

void dfs(int nodoActual){
    visited[nodoActual] = true;
    for(int vecino : grafo[nodoActual]){
        if(visited[vecino]==false){
            visited[vecino]=true;
            dfs(vecino);
        }
    }
}

void solve(){
    int n; cin>>n;
    visited.resize(n,false);
    grafo.resize(n);
    rep(i,m){
        int u,v; cin>>u>>v;
        grafo[u-1].pb(v-1);
        grafo[v-1].pb(u-1);
    }
    int nodo = ;//coloca tu nodo prro
    dfs(nodo);
}

//dijkstra
int n; cin>>n; //numero de vertices
const ll INF = 10000000000000;
vector<ll> dist(n, INF);
vector<ll> prev(n, -1);
vector<vector<pair<int,int>>> grafo(v);
int a, b, w;
rep(i,e){
    cin>>a>>b>>w;
    a--; b--;
    grafo[a].emplace_back(w,b);
    grafo[b].emplace_back(w,a);
}

priority_queue< pair<ll,ll> , vector<pair<ll,ll> >, greater<pair<ll,ll> > > q;
q.push({0,0});
dist[0]=0;
ll nodo, vecino, longitud, val, coste;
while(!q.empty()){
    nodo=q.top().S; //nodo mas cercano
    coste = q.top().F;
    q.pop();
    if(coste == dist[nodo]){
        for(auto &x: grafo[nodo]){
            vecino = x.S;
            longitud = x.F; 
            val = coste+longitud;
            if(val<dist[vecino]){
                dist[vecino]=val;
                prev[vecino]=nodo;
                q.push(make_pair(val, vecino));
            }
        }
    }
}

//BFS en cuadricula
int n,m; cin>>n>>n;
vector<vector<int>> vec(n,vector<int>(m));
vector<vector<bool>> marcado(n,vector<bool>(m,false));
vector<pii> current;
vector<int> dx = {-1, -1, -1, 0, 1, 1, 1, 0};
vector<int> dy = {-1, 0, 1, 1, 1, 0, -1, -1};
char upper;
rep(i,n){
    rep(j,m){
        cin>>upper;
    }
}
int ans = 0;
while(!current.empty()){
    ans++;
    vector<pii> news;
    int a, b;
    rep(i,current.size()){
        rep(j,8){
            a = current[i].F + dx[j]; b = current[i].S + dy[j];
            if(a<n and a >= 0 and b  >=0 and b <m and !marcado[a][b]){
                    news.pb({a,b});
                    marcado[a][b] = true;
            }

        }
    }
    current = news;
}

//BFS normal
int n, e; cin>>n>>e;
vector<vector<int>> grafo(n);
vector<vector<bool>> marcado(n,false);
vector<pii> current;
int u, v;
rep(i,e){
    cin>>u>>v;
    u--; v--;
    grafo[u].pb(v);
    grafo[v].pb(u);
}
int nodo_inicial;
marcado[nodo_inicial] = true;
current.pb(nodo_incial);
while(!current.empty()){
    vector<pii> news;
    for(int nodo: current){
        for(auto vecino: grafo[nodo]){
            if(!marcado[vecino]){
                marcado[vecino] = true;
                news.pb(vecino);
            }
        }
    }
    current = news;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //Borrar pantalla
    system("cls");
    
    return 0;
}