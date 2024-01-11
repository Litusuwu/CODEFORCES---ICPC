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
    ll n, m, k, l, d, restA,restB, ans = 0;
    cin >> n;
    
    k=1e9;
    d=1e9;
    ll candy[n]{}, orange[n]{};
    rep(i, n){
        cin >> candy[i];
        if(k>candy[i])k=candy[i];
    }
    rep(i, n){
        cin >> orange[i];
        if(d>orange[i])d=orange[i];
    }
    rep(i, n){
        restA=0;
        restB=0;
        if(candy[i]>k){
            restA = candy[i]-k;
        }
        if(orange[i]>d){
            restB = orange[i]-d;
        }
        if(restA > restB){
            ans+=restA;
        }
        else{
            ans+=restB;
        }
    }
    cout<<ans<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}