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
    int n, m, k, l, d, ans=0;
    cin >> n;
    int arr[n+1]{};
    rep(i, n){
        cin >> m;
        arr[m]++;
    }
    REP(i,2, 2*n + 1){
        int c = 0;
        REP(j, 1,(i+1)/2){
            if(i - j > n)continue;
            c += min(arr[j], arr[i-j]);
        }
        if(i%2==0)c+=arr[i/2]/2;
        ans = max(ans, c);
    }
    //cout<<ans<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}