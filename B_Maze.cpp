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

int matriz[2][501][501]{};
int matrizMovimientos[2][4]{{1, -1, 0, 0}, {0, 0, 1, -1}};
//bool visited[250000]{};
//vector<pair<int,int>>adj[250000];
vector<pair<int,int>>coords;
int bus = 0;

void actualDFS(int x, int y, int n, int m){
    //cout<<" x "<< " y" << x << y;
    //return; 
    int mx, my;
    matriz[0][x][y]=-1;
    bus--;
    bucle(i, 4){
        if(bus>0){
            mx=x+matrizMovimientos[0][i];my=y+matrizMovimientos[1][i];
            if(mx >= 0 and my >= 0 and mx < n and my < m ){
                if(matriz[1][mx][my]=='.'){
                    if(matriz[0][mx][my]!=-1)actualDFS(mx, my, n, m);
                }
            }
        }
    }
}
void Solve(){
    int n, m, k;
    char b;
    cin >> n >> m >> k;
    bucle(i, n){
        bucle(j, m){
            cin>>b;
            matriz[1][i][j]= int(b);
            if(matriz[1][i][j]==46){
                //cout<<"a";
                coords.push_back(make_pair(i, j));
            }
        }
    }
    bus = coords.size()-k;
   // cout<<bus<<endl;
    actualDFS(coords[0].first, coords[0].second, n, m);
    //cout<<int('.');
    bucle(i, coords.size()){
        if(matriz[0][coords[i].first][coords[i].second]!=-1)matriz[1][coords[i].first][coords[i].second]=int('X');
    }
    bucle(i, n){
        bucle(j, m){
            cout<<char(matriz[1][i][j]);
        }
        cout<<endl;
    }
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}