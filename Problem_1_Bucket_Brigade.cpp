#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
#define endl "\n"
typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    int xa,ya,xb,yb;
    vector<vector<char>>matriz(10, vector<char>(10));
    rep(i, 10){
        rep(j, 10){
            cin >> matriz[i][j];
            if(matriz[i][j] == 'B'){
                xa = i+1; ya = j+1;
            }
            else if(matriz[i][j] == 'L'){
                xb = i+1; yb = j+1;
            }
            else if(matriz[i][j] == 'R'){
                k = i+1; l = j +1;
            }
        }
    }
    if(ya == yb && l == yb && (k < xa && k > xb || k < xb && k > xa) 
        || xa == xb && xb == k && (l < ya && l > yb || l < yb && l > ya))
            ans+=2;
    cout << (abs(xa - xb) + abs(yb - ya) - 1 + ans ) << endl; 
}


int main(){
    fastio;
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

