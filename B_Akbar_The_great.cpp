#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define bucle(i, n) for(ll i = 0 ; i < n ; i++)
#define bucleV2(i, n) for(ll i = 0 ; i <= n ; i++)
#define bucleV3(i, k, n) for(ll i = k ; i < n ; i++)
#define bucleV4(i, k, n) for(ll i = k ; i <= n ; i++)
#define bucleR1(i, k, n) for(ll i = k; i > n ; i--)
#define bucleR2(i, k, n) for(ll i = k; i >= n ; i--)
typedef long long ll;

//int
const ll MAXIMO = 1e7;
int n_vertices;

vector<ll>grafo[MAXIMO];
vector<ll>visited(MAXIMO);
vector<pair<ll,ll>>power;

void addEdge(int from, int to){
    grafo[from].push_back(to);
}
void initialize(){
    bucle(i, n_vertices){
        grafo[i].clear();
        visited[i]=-1;
    }
    power.clear();
}
bool dfs(int pin){
    if(visited[power[pin].first]!=-1)return false;
    queue<pair<int,int>> q;
    q.push({power[pin].first, power[pin].second});
    
    visited[power[pin].first]= pin; // pintura
    
    while(!q.empty()){
        int uve = q.front().first;
        int strenght = q.front().second;
        //cout<<uve+1<<" "<<strenght<<endl;
        q.pop();
        if(strenght == 0)continue;
        //cout<<"a";
        for(auto it : grafo[uve]){
            int to = visited[it];
             
            if(to == -1)visited[it]=pin;
            else if(to != pin ){
                return false;
            }
            if(strenght>0)q.push({it, strenght-1});
        }

    }
    return true;
}
void Solve(){
    ll r, m, u, v;
    //bool flag;
    cin >> n_vertices >> r >> m;
    initialize(); 

    bucle(i, r){
        cin >> u >> v;
        addEdge(u-1, v-1);
        addEdge(v-1, u-1);        
    }
    bucle(i, m){
        cin >> u >> v;
        power.push_back({u-1, v});
    }
    bucle(i, m){
        if(!dfs(i)){
            cout<<"No"<<endl;
            return;
        }
    }
    bucle(i, n_vertices){
        //cout<<visited[i];
        if(visited[i]==-1){
            
            cout<<"No"<<endl;
            return;
        }
    }
    cout<<"Yes"<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}