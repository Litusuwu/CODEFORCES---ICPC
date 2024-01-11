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
    bool f1=false, f2=false, f3=false, f4=false;
    set<int>giga;
    rep(i, n){
        cin >> m >> k;
        if(k>0)giga.insert(1);
        if(k<0)giga.insert(2);
        if(m>0)giga.insert(3);
        if(m<0)giga.insert(4);
    }
    if(giga.size()==4)cout<<"NO";
    else cout<<"YES";
    cout<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}