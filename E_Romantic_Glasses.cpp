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
    ll n, m, k, l, d, ans = 0;
    map<ll,ll>exist;
    cin >> n;
    vector<ll> arg(n);
    
    
    exist[0]=1;

    rep(i, n){
        cin >> arg[i];
       // cout<< arg[i];
    }
    rep(i, n){
        m = arg[i];
        
        if((i+1)%2 == 0){
            ans+=m;
            if(exist[ans]==1){
                cout<<"YES"<<endl;
                return;
            }
            exist[ans]=1;
        }
        else{
            ans-=m;
            if(exist[ans]==1){
                cout<<"YES"<<endl;
                return;
            }
            exist[ans]=1;
        }
        
    }
    cout<<"NO"<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}