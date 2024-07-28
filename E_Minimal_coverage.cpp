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

typedef long double ld;
typedef long long ll;
typedef long long int li;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
ll genAns = 0;
const int SN = 1e6;
const int N = 3e3;
bool prime[SN + 1];
bool done[N][N];
int dp[N][N];
 
void SieveOfEratosthenes(int n); 
bool f(const pii &a, const pii &b){
    return a.second > b.second;
}
void Solve(){
    int n, m, k, l, d, r, ans = 0;
    
    cin >> m;

    rep(z, m){
        vector<pair<int,int>>coords, answ;
        ans = 0;
        cin >> n;
        while(cin >> l >> d){
            if(l == 0 and d == 0)break;
            //if(d < 0 or l > n)continue;
            coords.push_back(make_pair(l, d));
        }
        sort(coords.begin(), coords.end(), f);

        int ob = 0;
        // for(auto it : coords){
        //     cout << it.F << " --" << it.S<<endl;
        // }
        // cout << coords.size() << endl;
        while(ob < n){
            int i;
            for(i = 0 ; i < coords.size(); i++){
                if(ob < coords[i].S && coords[i].first <= ob){
                    answ.push_back({coords[i].first, coords[i].second});
                    ob = coords[i].second;
                    break;
                }
            }
            if(i == coords.size())break;
        }
        if(ob < n){
            cout << '0' << endl;
            cout << endl;
        }
        else{
            sort(answ.begin(), answ.end());
            cout << answ.size() << endl;
            for(auto it : answ){
                cout << it.first << " " << it.second << endl;
            }
        }
        
        
    }

}


int main(){
    fastio;
    //SieveOfEratosthenes(SN);
    int time = 1 ;
    // cin >> time ;
    while(time--)Solve();
    return 0;
}

void SieveOfEratosthenes(int n) {  
    memset(prime, true, sizeof(prime)); 
    for (int p = 2; p * p <= n; p++) { 
        if (prime[p] == true) { 
            for (int i = p * p; i <= n; i += p) 
                prime[i] = false; 
        } 
    } 
}