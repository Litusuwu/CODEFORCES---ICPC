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

vector<string> construct(int n){
    if(n == 1){
        return {"0", "1"}; 
    }
    vector<string>next = construct(n-1), act;
    
    
    for(int i = 0 ; i < next.size(); i++){ 
        act.push_back("1" + next[i]);
    }
    reverse(all(act));
    for(int i = 0 ; i < next.size(); i++){
        next[i] = "0" + next[i];
    }
    next.insert(next.end(), act.begin(), act.end());

    return next;
}

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    vector<string>grey;
    string str;
    cin >> n;
    grey = construct(n);
    for(auto it : grey){
        cout << it << endl;
    }
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

