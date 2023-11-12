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

const int V = 100001;
vector<int>adj[V];
bool visited[V]{};
int chimchar=0;
// void DFS(int u){
//     visited[u]=true;
//     for(auto v : adj[u])if(!visited[v])DFS(v);
// }
void DFS(int actual, int cuentaMiaus, int maxMiaus, int miaus[], int ant){
   // cout<<'a';
   
    if(cuentaMiaus>maxMiaus){
       // cout<<cuentaMiaus<<" > "<<maxMiaus<<endl;
        return;
    }
    if( cuentaMiaus<=maxMiaus and adj[actual].size()==1 and actual!=0)chimchar++;
    
    
    for(auto it : adj[actual]){
        //cout<<"Analizando "<<it<<endl;
        if(it==ant)continue;
        
        if(miaus[it])DFS(it, cuentaMiaus+1, maxMiaus, miaus, actual);
        else DFS(it, 0, maxMiaus, miaus, actual);
    }
}

void Solve(){
    int nVertices, maxMiaus, u, v;

    cin >> nVertices >> maxMiaus;
    //cout << nVertices << maxMiaus;
    int miaus[nVertices]{};

    bucle(i, nVertices)cin>>miaus[i];
    
    bucle(i, nVertices-1){
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    DFS(0, miaus[0], maxMiaus, miaus, -1);
    cout<<chimchar;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}