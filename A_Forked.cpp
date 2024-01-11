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

void Solve(){
    int x, y, Kx, Ky, Qx, Qy, newX, newY;
    cin >> x >> y >> Kx >> Ky >> Qx >> Qy;
    int count = 4,ans = 0;
    int movesX[]{x, x, -x, -x, y, y, -y, -y};
    int movesY[]{y, -y, y, -y, x, -x, x , -x};

    set<pair<pair<int,int>, pair<int,int>>>ostras;
    bucle(i, 8){
        bucle(j, 8){
            int posiRX = Kx + movesX[i];
            int posiRY = Ky + movesY[i];
            int posiQX = Qx + movesX[j];
            int posiQY = Qy + movesY[j];
            auto pos = ostras.find({{movesX[i], movesY[i]}, {movesX[j], movesY[j]}});
            if(posiRX == posiQX and posiRY == posiQY and pos==ostras.end()){
                ostras.insert({{movesX[i], movesY[i]}, {movesX[j], movesY[j]}});
                ans++;
            }
        }
    }
    cout<<endl<<ans<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}