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
    
//char matriz[100][100]{};
vector<vector<char>>matriz(52,vector<char>(52));
bool matrizV[52][52]{};
//vector<vector<bool>>matrizV(100,vector<bool>(100));
deque<pair<int,int>>candidatos;
vector<int>dx{0,0,1,-1,-1,1,-1,1},
            dy{{-1,1,0,0,1,1,-1,-1}};
int BFSGEAR2(int x, int y, int n, int m, char K){
    //if(matrizV[x][y])return 0;
    matrizV[x][y]=true;
    int a = 0, b;
    bucle(i, 8){
        int newX = x + dx[i];
        int newY = y + dy[i];
        if((newX >= 0 and newX < n) and (newY >= 0 and newY < m) and matriz[newX][newY]==(K+1) and !matrizV[newX][newY]){
            b = 1 + BFSGEAR2(newX, newY, n, m, K+1);
            //matrizV[newX][newY]=true;
        }
        else{
            b = 1;
            //matrizV[newX][newY]=true;
        }
        
        a = max(a, b);
    }
    return a;
}
void Solve(){
    
    int n, m,  cant = 1;
    
    while(cin >> n >> m and n){
        
        matriz.clear();
        int ans = 0, aw = 0;
        bucle(i, n){
            bucle(j, m){
                cin>>matriz[i][j];
                matrizV[i][j]=false;
                if(matriz[i][j]=='A'){candidatos.push_back({i,j});ans++;}
            }
        }
        ans = 0;
        while(not candidatos.empty()){
            int x = candidatos.front().first;
            int y = candidatos.front().second;
            
            ans = max(BFSGEAR2(x, y, n, m, 'A'),ans);
    
            candidatos.pop_front();
            //cout<<endl<<x<<" XD "<<y<<endl;
            
        }
        cout<<"Case "<<cant<<": "<<ans<<endl;
        cant++;
        
        //cin >> n >> m;
        //cin >> n ;if(cin.eof())break;cin>> m;
    }
}
    
int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
} 