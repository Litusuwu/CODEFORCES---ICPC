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

const int MAXROW = 2001;
int inf = INT_MAX;
int maxL;
int maxR;
bool matrix[MAXROW][MAXROW]{};
bool visited[MAXROW][MAXROW]{};
//vector<vector<int>>distancia(MAXROW, vector<int>(MAXROW, inf));

int dx[4]{-1, 1, 0, 0},
    dy[4]{0, 0, -1, 1};

bool valid(int i, int j, int x, int y){
    if(i >= 0 and i < x and j >= 0 and j < y)return true;
    return false;
}

void Solve(){
    int n, m, r, c, maxL, maxR;
    char k;
    cin >> n >> m;
    cin >> r >> c;
    cin >> maxL >> maxR;

    bucle(i, n){
        bucle(j, m){
            cin>>k;
            if(k=='.')matrix[i][j]=true;
            else matrix[i][j]=false;
        }
    }
   //BFS01();
    deque<pair<pair<int,int>,pair<int,int>>>q;
    //distancia[r][c] = 0;
    visited[r-1][c-1] = true;

    q.push_front({ {r-1, c-1} , {0,0} });

    while(!q.empty()){
        int x = q.front().first.first;
        int y = q.front().first.second;
        int wL = q.front().second.first;
        int wR = q.front().second.second;
        q.pop_front();
        bucle(i, 4){
            int nextX = x + dx[i];
            int nextY = y + dy[i];
            int sumL = wL + (i == 2);
            int sumR = wR + (i == 3);
            //if(nextX == 0 and nextY == 2)cout<<wL<<" "<<wR<<" ->"<<sumL<<" "<<sumR;
            if( nextX < 0 or nextX > n or nextY < 0 or nextY > m or !matrix[nextX][nextY] )continue;
            if( sumL > maxL or sumR > maxR)continue;
            if(!visited[nextX][nextY]){
                //if(nextX == 0 and nextY == 2)cout<<"XD";
                //cout<<sumR<<sumL<<" ";
                visited[nextX][nextY]=true;
                if(i==2 or i==3){
                    q.push_back({ {nextX, nextY} , {sumL,sumR} });
                }
                else{
                    q.push_front({ {nextX, nextY} , {sumL,sumR} });
                }
                    
            }
        }
    }
    //cout<<endl;
    ll ans = 0;
    bucle(i, n){
        bucle(j, m){
            if(visited[i][j]){
             //   cout<<"+";
                ans++;
            }
            //else cout<<"*";
            
        }
        cout<<endl;
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