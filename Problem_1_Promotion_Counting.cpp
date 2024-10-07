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
    vector<int>bronce(3), plata(3), oro(3), plat(3);
    cin >> bronce[0] >> bronce[1];
    cin >> plata[0] >> plata[1];
    cin >> oro[0] >> oro[1];
    cin >> plat[0] >> plat[1];

    bronce[2] = bronce[1] - bronce[0];
    plata[2] = plata[1] - plata[0];
    oro[2] = oro[1] - oro[0];
    plat[2] = plat[1] - plat[0];
    n = m = k = 0;
    n += plat[2] + oro[2] + plata[2];
    m += plat[2] + oro[2];
    k += plat[2];
    cout << n << endl << m << endl << k << endl;
}


int main(){
    fastio;
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

