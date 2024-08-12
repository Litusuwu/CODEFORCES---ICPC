#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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

const int L = 5e5 + 5;
vector<ll> dpsito(L,0);
const ll MODI = 1e8 + 7;


void fib(){
    dpsito[0] = 1;
    dpsito[1] = 1;
    for(int i = 2 ; i < L ; i++){
        dpsito[i] = (dpsito[i - 1] % MODI + dpsito[i - 2] %MODI) % MODI;
    }
}

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> n;    
    cout << dpsito[n-1] << endl;
}


int main(){
    fib();
    fastio;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}

