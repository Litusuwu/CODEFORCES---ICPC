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
    unsigned long long int n=0, m=0, k=0, l=0, d=0, r=0, ans = 0;
    cin >> n >> m;
    d = max(n, m) * max(n, m);
    l = max(n, m) - 1;
    r = d - l;
    if(n > m){
        if(n&1)k = -1;
        else k = 1;

        r += (n-m)*k;
    }
    else{
        if(m&1)k = 1;
        else k = -1;

        r += (m-n)*k;
    }
  
    cout << r << endl;
}


int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}

