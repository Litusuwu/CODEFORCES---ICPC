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
    int n, m, k, l, d, r, x1, y1, x2, y2, ans = 0, difX, difY;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    string s; cin >> s;
    map<char, pair<int,int>>coords;
    coords['S'] = {0, -1};
    coords['W'] = {-1, 0};
    coords['N'] = {0, 1};
    coords['E'] = {1, 0};
    
    difX = x2 - x1; difY = y2 - y1;

    if()
    for(int i = 0 ; i < s.length() ; i ++){
        
    }
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

