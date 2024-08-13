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

bool comp(const string &a, const string &b, const unordered_map<char, int> &rank) {
    int len = min(a.size(), b.size());
    for (int i = 0; i < len; ++i) {
        if (rank.at(a[i]) != rank.at(b[i])) {
            return rank.at(a[i]) < rank.at(b[i]);
        }
    }
    return a.size() < b.size();
}

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    string alf, s;
    vector<string>ss;
    unordered_map<char, int> rank;
    
    cin >> alf >> n;
    for (int i = 0; i < alf.size(); ++i) {
        rank[alf[i]] = i;
    }
    rep(z, n){
        cin >> s;
        ss.push_back(s);
    }
    sort(ss.begin(), ss.end(), [&](const string &a, const string &b){
        return comp(a, b, rank);
    });
    for(auto it : ss){
        cout << it << endl;
    }
    cout << endl;
}


int main(){
    fastio;
    int time = 1 ;
    cin >> time ;
    while(time--)Solve();
    return 0;
}

