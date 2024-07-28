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

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    
    cin >> m;

    rep(z, m){
        vector<pair<int,int>>coords, answ;
        ans = 0;
        cin >> n;
        while(cin >> l >> d && l && d){
            coords.push_back(make_pair(l, d));
        }
        sort(coords.begin(), coords.end());

        int ob = coords[0].first, lI = coords[0].F, lD = coords[0].S;

        while(ob < n){
            int act = ob;
            for(int i = 1 ; i < coords.size() ; ++i ){
                if(coords[i].F > act )break;
                
                ob = max(ob, coords[i].second);
                lI = coords[i].first;
                lD = coords[i].second;
            }
            
            ans++;
            answ.push_back(make_pair(lI, lD));
            
            if(act < n and ob == act){
                //cout << r << endl;
                ans = -1;
                break;
            }
        }
        if(ans == -1){
            cout << '0' << endl;
        }
        else{
            cout << ans<<endl;
            for(auto it : answ){
                cout << it.first <<" "<<it.second<<endl;
            }
        }
        cout << endl;
        
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