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

class Trie{

public:
    vector<vector<int>>grid;
    vector<bool>endWord;
    int count;
// public:
    Trie(){
        grid.emplace_back(26, -1);
        endWord.push_back(false);
        count = 1;
    }

    void push(const string &s){

        int cur = 0;
        
        for(char c : s){
            if(grid[cur][c - 'a'] == -1){
                grid.emplace_back(26, -1);
                endWord.push_back(false);
                grid[cur][c - 'a'] = count++;
            }
            cur = grid[cur][c - 'a'];
        }

    }
    bool search(const string &s){
        int cur = 0;
        for(char c : s){
            if(grid[cur][c - 'a'] == -1){
                return false;
            
            cur = grid[cur][c - 'a'];
        }
        return true;
    }

private:
};

void Solve(){
    int n, m, k, l, d, r, ans = 0;
    Trie tri;string s;
    vector<string>reg;
    cin >> n;
    rep(i, n){
        cin >> s;
        reg.push_back(s);
        tri.push(s);
    }
    cin >> m;
    rep(z, m){
        bool flag;
        cin >> k;
        switch(k){
            case 1:

                break;
            case 2:
            
                break;
            case 3:
            
                break;
        }
    }
}


int main(){
    fastio;
    int time = 1 ;
    //cin >> time ;
    while(time--)Solve();
    return 0;
}

