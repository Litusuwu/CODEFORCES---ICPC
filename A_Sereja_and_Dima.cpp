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
    int n, m, k, l, d, ans = 0, ans2 = 0;
    cin >> n;
    deque<int>pil;
    rep(i, n){
        cin >> k;
        pil.push_back(k);
    }
    for(int i = 0 ; not pil.empty() ; i++){
        if(i%2 == 0){
            ans += max(pil.front(), pil.back());
            (pil.back() > pil.front() ? pil.pop_back() : pil.pop_front());
        }
        else{

            ans2 += max(pil.front(), pil.back());
            (pil.back() > pil.front() ? pil.pop_back() : pil.pop_front());
        }
    }
    cout << ans <<" "<< ans2 ;
}


int main(){
    Daysi;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}