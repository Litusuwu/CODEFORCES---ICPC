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

void Solve(){
    int n, m, k, l, d, r = 0, ans = 0;
    cin >> n >> m;
    vector<string>palabras(n);
    rep(i, n)cin >> palabras[i];
    for(int i = 0; i < n ; i++){
        if(r == 0){
            cout << palabras[i];
            ans += palabras[i].length();
            r = 1;
        }
        else if (r==1){
            if(ans + palabras[i].length()  <= m){
                cout<<" " << palabras[i];
                ans+= palabras[i].length();
            }
            else{
                cout << endl;
                r = 0;
                ans = 0;
                i--;
            }
        }
    }

}


int main(){
    fastio;
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

