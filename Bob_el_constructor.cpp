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

vector<vector<int>>vectorsines;

void BK(int n, int tam, int &ans){
    if(n > tam )return;
    if(n == tam){
        vector<int>
        return;    
    }
    BK(n + 2, )
}

void Solve(){
    int n, m, k, l, d, r, counter = 0, ans = 0;
    cin >> n >> m;
    const int tam = n;
    vector<bool>bitset(n, false);

    BK(0, n,bitset, counter);
}



int main(){
    fastio;
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

