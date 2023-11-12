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

// const ll MAXIMO = 1e7;
int n_vertices;
int ans = 0;
// vector<ll>grafo[MAXIMO];
// vector<ll>visited(MAXIMO);
// vector<pair<ll,ll>>power;
void Solve(){
    string c1, c2;
    int x, y;
    cin >> c1 >> c2;
    x = abs(c1[0]-c2[0]);
    y = abs(c1[1]-c2[1]);
    cout<<(x>y? x : y)<<endl;
    while(c1[0]!=c2[0] or c1[1]!=c2[1]){
        if(!(c1[0]==c2[0])){
            if(c1[0]<c2[0]){cout<<'R';c1[0]++;}
            else {cout<<'L';c1[0]--;}
        }
        if(!(c1[1]==c2[1])){
            if(c1[1]<c2[1]){cout<<'U';c1[1]++;}
            else {cout<<'D';c1[1]--;}
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