#include <bits/stdc++.h>
using namespace std;
#define Daysi ios::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define rep(i,n) for (ll i = 0; i < n; ++i)
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
    ll n, m, k, l, d, ans = 0, prod=1;
    bool flag=false;
    cin >> n;
    //ll arr[n]{};
    rep(i, n){
        cin>>k;
       // cout<<k<<" ";
        if(k < 0LL){
            //cout<<"e";
            ans++;
            prod*=(-1);
            l = i+1;
        }
        else if(k>0LL){
            prod*=1;
            d = i + 1;
        }
        if(k==0 ){
            flag = true;
        }
    }
    if(flag){
        cout<<"0"<<endl;
        return;
    }
   // cout<<ans;
    if(prod > 0){
        if(ans > 0){
            cout<<"1"<<endl;
            cout<<l<<" "<<'0'<<endl;
        }
        else{
            cout<<'1'<<endl;
            cout<<d<<" "<<'0'<<endl;
        }
        
    }
    else{
        cout<<'0'<<endl;
    }
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}