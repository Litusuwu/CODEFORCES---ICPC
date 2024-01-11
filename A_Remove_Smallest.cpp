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
    set<int>gredp;
    vector<int>coli;
    rep(i, n){
        cin >> m;
        gredp.insert(m);
    }
    //sort(coli.begin(), coli.end());
    if(gredp.size()==1){
        cout<<"YES"<<endl;
        return;
    }
    for(auto it : gredp){
        coli.push_back(it);
    }
    rep(i, coli.size()-1){
       // cout<<coli[i];
        if(coli[i+1]-coli[i] != 1){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}


int main(){
    Daysi;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}