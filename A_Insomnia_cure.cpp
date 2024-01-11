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

void Solve(){
    int n, m, k, l, d, ans=0;
    cin >> k >> l >> m >> n >> d;
    bool arr[d]{};
    rep(i, d){
        if((i+1)%k==0)arr[i]=true;
        if((i+1)%l==0)arr[i]=true;
        if((i+1)%m==0)arr[i]=true;
        if((i+1)%n==0)arr[i]=true;
        if(arr[i])ans++;
    }
    cout<<ans;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}