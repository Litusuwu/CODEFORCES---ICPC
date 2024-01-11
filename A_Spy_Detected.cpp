#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (int i = 0; i < n; ++i)
#define REP(i,k,n) for (int i = k; i < n; ++i)
#define REPR(i,k,n) for (int i = k; i >= n; --i)
#define pb push_back
#define fill(x,v) memset(x,v,sizeof(x))
#define all(v) (v).begin(),(v).end()
#define F first
#define S second
 
typedef long double ld;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;

void Solve(){
    int n, m, k, l, d, r, ans = INT_MAX;
    cin >> n;
    multiset<int>ostras;
    map<int, int>ostras2;
    rep(i, n){
        cin >> m;
        ostras2[m] += i+1;
        ostras.insert(m);
    }
    for(auto it : ostras2){
        //cout<<ostras.count(it.F)<<" ";
        if(ostras.count(it.F) < ans ){ans = ostras.count(it.F);r = it.F;}
    }
    cout << ostras2[r] << endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}