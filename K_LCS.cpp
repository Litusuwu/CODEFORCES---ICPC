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
const int SN = 1e6;
const int N = 3e3;
bool prime[SN + 1];
bool done[N][N];
int dp[N][N];

string s1, s2, Sans="";

void SieveOfEratosthenes(int n);

int DP(int m, int n){
    if (m ==s1.length() or n==s2.length()) return 0;
    if( done[m][n] ) return dp[m][n];
    dp[m][n] = max(DP(m+1, n), DP(m, n+1));
    if(s1[m]==s2[n])dp[m][n]=max(dp[m][n], 1+DP(m+1,n+1));
    done[m][n]=true;
    return dp[m][n];
}
void recons(int x, int y){
    if(x == s1.length() or y == s2.length())return;
    if(DP(x,y)==DP(x+1,y)){
        recons(x+1,y);
    }
    else if (DP(x, y)==DP(x, y+1)){
        recons(x, y+1);
    }
    else if(s1[x]==s2[y] and DP(x, y)== 1 + DP(x+1,y+1)){
        //cout<<"xd";
        Sans += s1[x];
        recons(x+1,y+1);
    }
}
void Solve() {
    int n, m, k, l, d, r, ans = 0;
    string c1, c2, c3;
    cin >> s1 >> s2;
    recons(0, 0);
    cout<<Sans;
    
}

int main(){
    Daysi;
    int time = 1;
    while (time--) Solve();
    return 0;
}

void SieveOfEratosthenes(int n){
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}
