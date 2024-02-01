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
bool prime[SN + 1];

map<string, string> memo;

void SieveOfEratosthenes(int n);

string LCS(string c1, string c2, int n, int m, string k1, string k2){
    string z1 = k1;z1.pop_back();
    string z2 = k2;z2.pop_back();

    if (m < 0 or n < 0) return "";
    string key = to_string(n) + "," + to_string(m);
    if (memo.find(key) != memo.end()){
        return memo[key];
    }
    if (c1[n] == c2[m]){
        memo[key] = c1[n] + LCS(c1, c2, n - 1, m - 1,z1, z2);
    }
    else{
        string option1 = LCS(c1, c2, n - 1, m, z1, k2);
        string option2 = LCS(c1, c2, n, m - 1,k1, z2 );
        memo[key] = (option1.length() > option2.length()) ? option1 : option2;
    }

    return memo[key];
}

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    string c1, c2, c3;
    cin >> c1 >> c2;

    c3 = LCS(c1, c2, c1.length() - 1, c2.length() - 1, c1, c2);
    reverse(c3.begin(), c3.end());
    cout << c3 << endl;
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
