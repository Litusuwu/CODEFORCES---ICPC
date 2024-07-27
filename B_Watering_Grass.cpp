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
    int n, m, d, ans = 0, j = 0;
    double r, w, k, l ;
    //vector<int>rD(10001), rI(10001), pos(10001);
    
    vector<pair<double, double>>radios;

    while(cin >> n >> m >> k){
        
        vector<pair<double, double>>radios;
        j = 0;
        ans = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> l >> d;
            
            if(d <= k/2) continue;
            //pos[i] = l;
            double rD = l - sqrt(d*d - (k/2)*(k/2));
            double rI = l + sqrt(d*d - (k/2)*(k/2));
            //cout << l << "and"<< d << ": "<< j <<" : " << rD << " <-> " << rI << endl;
            radios.push_back(make_pair(rD, rI));
        }
        sort(radios.begin(), radios.begin() + radios.size());
        // for(int i = 0 ; i  < radios.size() ; i++){
        //     cout << radios[i].F << " " << radios[i].S << endl;
        // }
        r = 0;

        while(r < m){
            w = r;
            for(int i = 0 ; i < radios.size() ; i++){
                //cout << radios[i].first << "- "<<endl; 
                if(w < radios[i].F)break;
                //cout << "a";
                r = max(r, radios[i].second);
            }
            ans++;
            if(w < m and r == w){
                //cout << r << endl;
                ans = -1;
                break;
            }
           // cout << r << " <==" <<endl;
        }        
        cout << ans << endl;
        //cout << "hola mundo"<<endl;
    }
    
}


int main(){
    fastio;
    //SieveOfEratosthenes(SN);
    int time = 1 ;
    //cin >> time ;
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