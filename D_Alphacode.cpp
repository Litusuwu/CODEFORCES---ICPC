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
const int N = 6e3;
bool prime[SN + 1];
bool done[N];
int dp[N];

string s1;
int lim = 26;
void SieveOfEratosthenes(int n); 

int DP(int i){
    if(i <= 0)return 1;
    if(done[i])return dp[i];
    if(s1[i]!='0')dp[i]=DP(i-1);
    int num = (s1[i-1]-'0')*10+(s1[i]-'0');
    if(s1[i-1]!='0' and num<=lim  and num>=10)dp[i]+=DP(i-2);
    done[i]=true;
    return dp[i];
}


void Solve(){
    int n, m, k, l, d, r, ans = 0;
    cin >> s1;
    rep(i, 5005){
        dp[i]=0;
        done[i]=false;
    }
    if(s1 =="0")return;
    dp[0]=1;
    done[0]=true;
    //int a = 
    cout<<DP(s1.size()-1)<<endl;
    Solve();
}


int main(){
    Daysi;
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